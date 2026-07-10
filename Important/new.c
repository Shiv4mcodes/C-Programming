#include <stdio.h>
#include <stdlib.h>

struct account {
    int acc_no;
    char name[50];
    float balance;
};

void createAccount();
void deposit();
void withdraw();
void displayAccount();
void displayAll();

int main() {
    int choice;

    while (1) {
        printf("\n=== Bank Account Management System ===\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: displayAccount(); break;
            case 5: displayAll(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

void createAccount() {
    FILE *fp;
    struct account acc;

    fp = fopen("bank.dat", "ab");
    if (fp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &acc.acc_no);
    printf("Enter Name: ");
    scanf(" %[^\n]", acc.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    fwrite(&acc, sizeof(acc), 1, fp);
    fclose(fp);

    printf("Account created successfully!\n");
}

void deposit() {
    FILE *fp;
    struct account acc;
    int acc_no;
    float amount;
    int found = 0;

    fp = fopen("bank.dat", "rb+");
    printf("Enter Account Number: ");
    scanf("%d", &acc_no);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            acc.balance += amount;

            fseek(fp, -sizeof(acc), SEEK_CUR);
            fwrite(&acc, sizeof(acc), 1, fp);
            found = 1;
            break;
        }
    }

    fclose(fp);
    if (found)
        printf("Amount deposited successfully!\n");
    else
        printf("Account not found!\n");
}

void withdraw() {
    FILE *fp;
    struct account acc;
    int acc_no;
    float amount;
    int found = 0;

    fp = fopen("bank.dat", "rb+");
    printf("Enter Account Number: ");
    scanf("%d", &acc_no);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (acc.balance >= amount) {
                acc.balance -= amount;
                fseek(fp, -sizeof(acc), SEEK_CUR);
                fwrite(&acc, sizeof(acc), 1, fp);
                printf("Withdrawal successful!\n");
            } else {
                printf("Insufficient balance!\n");
            }
            found = 1;
            break;
        }
    }

    fclose(fp);
    if (!found)
        printf("Account not found!\n");
}

void displayAccount() {
    FILE *fp;
    struct account acc;
    int acc_no, found = 0;

    fp = fopen("bank.dat", "rb");
    printf("Enter Account Number: ");
    scanf("%d", &acc_no);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {
            printf("\nAccount Number: %d", acc.acc_no);
            printf("\nName: %s", acc.name);
            printf("\nBalance: %.2f\n", acc.balance);
            found = 1;
            break;
        }
    }

    fclose(fp);
    if (!found)
        printf("Account not found!\n");
}

void displayAll() {
    FILE *fp;
    struct account acc;

    fp = fopen("bank.dat", "rb");
    if (fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\n--- All Accounts ---\n");
    while (fread(&acc, sizeof(acc), 1, fp)) {
        printf("\nAccount No: %d", acc.acc_no);
        printf("\nName: %s", acc.name);
        printf("\nBalance: %.2f\n", acc.balance);
    }

    fclose(fp);
}
