#include<iostream>
using namespace std;

int main(){
int size ;
cout << "Please enter you Array Size : ";
cin >> size;
int arr[size];
int lastElementIndex = -1;

cout << "\nPlease enter you data : ";
int index1;
int data1; cin >> data1;
// check index valid or not
//if(index < 0 or index >= size) // for invalid
// if(index >= and index <= size - 1) for valid index

if(lastElementIndex == size - 1){ // arr is full
cout << "\n Since the array is already full at what index you want :";
// work
cout << "\n enter your desired index: ";
cin >> index1;
// do shifting shift data towards right
for(int i = size - 1; i >= index1 + 1; i--){
arr[i] = arr[i - 1];
}
}
else{
// we have vacant space L - > R
arr[lastElementIndex + 1] = data1;
lastElementIndex ++;
}
cout << "\n";
for(int i = 0; i < size; i++){
cout << arr[i] << " ";
}
cout << "\n";



cout << "\nPlease enter you data : ";
data1; cin >> data1;
// check index valid or not
//if(index < 0 or index >= size) // for invalid
// if(index >= and index <= size - 1) for valid index

if(lastElementIndex == size - 1){ // arr is full
cout << "\n Since the array is already full at what index you want :";
// work
cout << "\n enter your desired index: ";
index1; cin >> index1;
// do shifting shift data towards right
for(int i = size - 1; i >= index1 + 1; i--){
arr[i] = arr[i - 1];
}

}
else{
// we have vacant space L - > R
arr[lastElementIndex + 1] = data1;
lastElementIndex ++;
}
cout << "\n";
for(int i = 0; i < size; i++){
cout << arr[i] << " ";
}
cout << "\n";

cout << "\nPlease enter you data : ";
data1; cin >> data1;
// check index valid or not
//if(index < 0 or index >= size) // for invalid
// if(index >= and index <= size - 1) for valid index

if(lastElementIndex == size - 1){ // arr is full
cout << "\n Since the array is already full at what index you want :";
// work
cout << "\n enter your desired index: ";
index1; cin >> index1;
// do shifting shift data towards right
for(int i = size - 1; i >= index1 + 1; i--){
arr[i] = arr[i - 1];
}
arr[index1] = data1;
}
else{
// we have vacant space L - > R
arr[lastElementIndex + 1] = data1;
lastElementIndex ++;
}
cout << "\n";
for(int i = 0; i < size; i++){
cout << arr[i] << " ";
}
cout << "\n";
return 0;
}

//enter your size of array 5... enter the data  10,20,30,50,60 ....  index should not be -10

/*public static TreeNode<Integer> takeinput(Scanner s) {
System.out.println("Enter the data of first node");
int n=s.nextInt();
TreeNode<Integer> root=new TreeNode<>(n);
System.out.println("Enter the no. of child of "+ n +"node");
int childcount=s.nextInt();
for(int i=0;i<childcount;i++) {
TreeNode<Integer> child= takeinput(s);
root.children.add(child);
}
return root;
}
public static void print(TreeNode<Integer> root) {
String s=root.data+ ":";
for(int i=0;i<root.children.size();i++) {
s=s+(root.children.get(i).data);
}
System.out.println(s);
for(int i=0;i<root.children.size();i++) {
print(root.children.get(i));
}
}*/
/*#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void sub(vector<int> nums, int i, vector<int> temp)
{
if(i==nums.size())
{
ans.push_back(temp);
return;
}

sub(nums, i+1, temp);
temp.push_back(nums[i]);
sub(nums, i+1, temp);
}


int main()
{
int n;
cin >> n;

vector<int> inp;
for (int i = 0; i < n; i++)
{
int q;
cin>>q;
inp.push_back(q);
}

vector<int> temp;
sub(inp, 0, temp);
// cout<<ans.size();
for(int i=0;i<ans.size();i++)
{
for(int j=0;j<ans[i].size();j++)
{
cout<<ans[i][j]<<" ";
}
cout<<endl;
}
*/