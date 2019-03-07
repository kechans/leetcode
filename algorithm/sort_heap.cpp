//https://www.cnblogs.com/MOBIN/p/5374217.html
//时间复杂度为O(N*logN)
//堆实际上是一颗完全二叉树
//1．父结点的键值总是大于或等于（小于或等于）任何一个子节点的键值。

//2．每个结点的左子树和右子树都是一个二叉堆（都是最大堆或最小堆）。

//当父结点的键值总是大于或等于任何一个子节点的键值时为最大堆。当父结点的键值总是小于或等于任何一个子节点的键值时为最小堆
//

//堆的插入   一般都用数组来表示堆，i结点的父结点下标就为(i – 1) / 2。它的左右子结点下标分别为2 * i + 1和2 * i + 2。如第0个结点左右子结点下标分别为1和2
//  每次插入都是将新数据放在数组最后。可以发现从这个新数据的父结点到根结点必然为一个有序的数列

// 堆的删除，每次删除的都是第0个元素，然后从跟节点开始进行一次自上而下的调整，
// n =》 a的长度，num要插入的新数据
/*void MinHeapAddNumber(int a[],int n,int num){
    a[n] = num;
    MinHeapFixup(a, n);
}
//新加入i节点，父节点为(i-1)/2;
void MinHeapFixup(int a[], int n){
    int j ,tmp;
    tmp = a[i];
    j = (n-1)/2;
    while(j >= 0 && n != 0){
        if (a[j] <= tmp){
            break;
        }
        a[n] = a[j];
        n = j;
        j = (n-1)/2;
    }
    a[i] = tmp;
}*/


#include <iostream>
#include <algorithm>
using namespace std;

void HeapAdjust(int *a,int i,int len)  //调整堆,i节点是父节点
{
    int left ;
    int right ;
    int j ;
    while((left = 2*i+1)<=len){//如果有左子树
        right = 2*i+2;
        j = left; //j指向左孩子
        if(j < len && a[left] < a[right]){//如果左边比右边小，j指向右孩子
            j++;//j指向右孩子
        }
        if(a[i] < a[j]){
            swap(a[i],a[j]);
        }else{
            break;
        }
        i=j;//如果a[j]还有子节点，还要进行j节点的交换
    }
}

void BuildHeap(int *a,int len)    //建立堆
{
    int i;//只有len/2-1个元素有子节点
    for(i=len/2-1;i>=0;i--){
        HeapAdjust(a,i,len);//从下向上，从右到左调整
    }
}

void HeapSort(int *a,int size)    //堆排序
{
    while(len>=0){
        swap(a[0],a[len]);//将堆顶元素与最后一个元素交换，然后调整有序.
        len--;
        HeapAdjust(a,0,len);
    }
}

int main(int argc, char *argv[])
{
     int a[]={0,16,20,3,11,17,8};
     int size = sizeof(a)/sizeof(a[0]);
     HeapSort(a,size);
     for(int i=1;i<=size;i++)
            cout<<a[i]<<" ";
      cout<<endl;
    return 0;
}




