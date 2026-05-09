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

void selectionSort(int arr[], int n) {
int temp,min;

for (int i = 0;i < n;i++){
    min= arr[i];

    for (int j = i+1;j<n;j++){
if (arr[j]<arr[min]){
    min=arr[j];
}
    }
    temp= arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
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

for (int i = 0; i < n; i++)
{
cin >> arr[i];
}

sortTree(arr,n);
print(arr,n);

    return 0;
}