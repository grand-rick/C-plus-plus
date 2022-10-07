#include <iostream>
// note run the program then uncomment the bellow lines that you see necessary then try to make the program run as required


using namespace std;

    void printArray (int arr[], int size){
    for (int x=0; x<size; x++){
        cout <<arr [x]<<endl;
    }

}
int main()
{
    int myArr[3] ={42,33,88};
    printArray(myArr,3);
    cout<< "enter any other 10 numbers now"<<endl;
    int myArrs[10];

    // Getting the inputs
    for (int i=0; i<10; i++){
        cin >> myArrs[i]; //can you make this code so that it my collect some integers and display them like it does to int cout <<arr [x]<<endl;
    }

    cout << "You entered the following numbers: " << endl;

    // Outputting the numbers
    for (int y = 0; y < 10; y++)
    {
        cout << myArrs[y] << endl;
    }

    return 0;
}