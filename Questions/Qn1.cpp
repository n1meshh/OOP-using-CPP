#include <iostream>
#include <cstdlib>

using namespace std;

int i, j, k, p, s1, s2;
int setA[10], setB[10], setC[20], flag;
int ch;

void unionSet() {
    k = 0;
    
    for (i = 0; i < s1; i++) {
        setC[k++] = setA[i];
    }

    for (i = 0; i < s2; i++) {
        flag = 1;
        for (j = 0; j < s1; j++) {
            if (setB[i] == setA[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            setC[k++] = setB[i];
        }
    }

    cout << "Union: ";
    for (i = 0; i < k; i++)
        cout << setC[i] << " ";
    cout << endl;
}

void intersectionSet() {
    k = 0;
    for (i = 0; i < s2; i++) {
        for (j = 0; j < s1; j++) {
            if (setB[i] == setA[j]) {
                setC[k++] = setB[i];
                break;
            }
        }
    }

    cout << "Intersection: ";
    for (i = 0; i < k; i++)
        cout << setC[i] << " ";
    cout << endl;
}

void differenceSet() {
    k = 0;
    for (i = 0; i < s1; i++) {
        flag = 1;
        for (j = 0; j < s2; j++) {
            if (setA[i] == setB[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            setC[k++] = setA[i];
        }
    }

    cout << "Difference (A - B): ";
    for (i = 0; i < k; i++)
        cout << setC[i] << " ";
    cout << endl;
}

void complementSet() {
    int universal[20], uniSize = 0;

    for (i = 0; i < s1; i++) {
        universal[uniSize++] = setA[i];
    }

    for (i = 0; i < s2; i++) {
        flag = 1;
        for (j = 0; j < s1; j++) {
            if (setB[i] == setA[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            universal[uniSize++] = setB[i];
        }
    }

    k = 0;
    for (i = 0; i < uniSize; i++) {
        flag = 1;
        for (j = 0; j < s1; j++) {
            if (universal[i] == setA[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            setC[k++] = universal[i];
        }
    }

    cout << "Complement of A: ";
    for (i = 0; i < k; i++)
        cout << setC[i] << " ";
    cout << endl;
}

int main() {
    cout << "Enter the size of Set A: ";
    cin >> s1;
    cout << "Enter the elements of Set A:\n";
    for (i = 0; i < s1; i++)
        cin >> setA[i];

    cout << "Enter the size of Set B: ";
    cin >> s2;
    cout << "Enter the elements of Set B:\n";
    for (i = 0; i < s2; i++)
        cin >> setB[i];

    while (1) {
        cout << "\nSet Operations Menu:\n";
        cout << "1. Union\n";
        cout << "2. Intersection\n";
        cout << "3. Difference (A - B)\n";
        cout << "4. Complement (of A)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                unionSet();
                break;
            case 2:
                intersectionSet();
                break;
            case 3:
                differenceSet();
                break;
            case 4:
                complementSet();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}
