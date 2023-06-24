#include <iostream>
using namespace std;
void sorting(char str[], int size, int x);

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    bool x;
    cout << "Press '1' for ascending order sorting or '0' for descending order sorting: ";
    cin >> x;
    char str[n];
    sorting(str, n, x);
    return 0;
}

void sorting(char str[], int size, int x)
{
    int temp, i, j;
    cout << "Enter " << size << " elements: ";
    cin.ignore();
    cin.getline(str, size);

    if (x)
    {
        for (i = 0; str[i]; i++)
        {
            for (j = i + 1; str[j]; j++)
            {
                if (str[i] > str[j])
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
            cout << str[i] << " ";
        }
    }
    else
    {
        for (i = 0; str[i]; i++)
        {
            for (j = i + 1; str[j]; j++)
            {
                if (str[i] < str[j])
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
            cout << str[i] << " ";
        }
    }
}