#include <iostream>
using namespace std;


struct Node{
int key;
Node *left,*right;
};

Node* newNode(int item){
    Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;

}

Node* insert(Node* node, int key){
if(node == NULL)
return node = newNode(key);

if(node->key > key){
    node->left= insert(node->left,key);
}

else if(node->key < key){
  node->right= insert(node->right,key);
}

return node;
}

void storeSorted(Node* node,int arr[], int &i){
if(node != NULL){
    storeSorted(node->left,arr,i);
    arr[i++] = node->key;
    storeSorted(node->right,arr,i);
}
}


void sortTree(int arr[],int n){
    Node* node = NULL;

    for ( int i = 0; i < n; i++)
    {
        node = insert(node,arr[i]);
    }
    int i=0;
    storeSorted(node,arr,i);
}
void print(int arr[],int n){
    for(int i = 0 ; i < n ;i++){
        cout << arr[i]<<" ";
    }

}
void bubbleS(int arr[], int n){
    int temp;
    bool swapped;

    for(int i = 0; i < n-1; i++){
        swapped = false;

        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}

void gap(int arr[], int n){
for(int gap =n/2;gap>0;gap/=2){
    for (int i = gap; i < n; i++)
    {
    int temp = arr[i];
    int j;
    for(j=i;j>=gap && arr[j-gap]> temp;j-=gap){
        arr[j]= arr[j-gap];
        
    }
arr[j] = temp;
    }
    
}
}
int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int choice;
    cout << "1- Tree Sort\n";
    cout << "2- Bubble Sort\n";
    cout << "3- Shell Sort\n"; 
    cout << "Choose: ";
    cin >> choice;

    switch(choice){
        case 1:
            sortTree(arr, n);
            break;

            case 2:
            bubbleS(arr, n);
            break;

        case 3:
            gap(arr, n);
            break;

        default:
            cout << "Invalid choice\n";
            return 0;
    }

    print(arr, n);

    return 0;
}