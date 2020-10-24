#include<cstdio>
#include<iostream>
using namespace std;
string str1,str2,str3;
struct Node{
	char c;
	Node* left;
	Node* right;
};
Node* reBuild(int l,int r,int ll,int rr){
	if(l>r) {
		return NULL;
	}
	Node* root;
	root=new Node;
	root->c=str2[r];
	int k;
	for(int i=ll;i<=rr;i++){
		if(str1[i]==str2[r]){
			k=i;
			break;	
		}
	}
	int num=k-ll;
	root->left=reBuild(l,l+num-1,ll,k-1);
	root->right=reBuild(l+num,r-1,k+1,rr);
	return root; 
}
void print(Node* t){
	if(t==NULL) return ;
	printf("%c",t->c);
	print(t->left);
	print(t->right);
}
int main() {
	cin>>str1;
	getchar();
	cin>>str2;
	Node* t;
	t=reBuild(0,str2.length()-1,0,str1.length()-1);
	print(t);
	
	return 0;
}
