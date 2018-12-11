//时间复杂度为O(N*logN)
//堆实际上是一颗完全二叉树
//1．父结点的键值总是大于或等于（小于或等于）任何一个子节点的键值。

//2．每个结点的左子树和右子树都是一个二叉堆（都是最大堆或最小堆）。

//当父结点的键值总是大于或等于任何一个子节点的键值时为最大堆。当父结点的键值总是小于或等于任何一个子节点的键值时为最小堆
//

//堆的插入   一般都用数组来表示堆，i结点的父结点下标就为(i – 1) / 2。它的左右子结点下标分别为2 * i + 1和2 * i + 2。如第0个结点左右子结点下标分别为1和2
//  次插入都是将新数据放在数组最后。可以发现从这个新数据的父结点到根结点必然为一个有序的数列

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
#include<algorithm>
using namespace std;

void HeapAdjust(int *a,int i,int size)  //调整堆
{
    int lchild=2*i;       //i的左孩子节点序号
    int rchild=2*i+1;     //i的右孩子节点序号
    int max=i;            //临时变量
    if(i<=size/2)          //如果i不是叶节点就不用进行调整
    {
        if(lchild<=size&&a[lchild]>a[max])
        {
            max=lchild;
        }
        if(rchild<=size&&a[rchild]>a[max])
        {
            max=rchild;
        }
        if(max!=i)
        {
            swap(a[i],a[max]);
            HeapAdjust(a,max,size);    //避免调整之后以max为父节点的子树不是堆
        }
    }
}

void BuildHeap(int *a,int size)    //建立堆
{
    int i;
    for(i=size/2;i>=1;i--)    //非叶节点最大序号值为size/2
    {
        HeapAdjust(a,i,size);
    }
}

void HeapSort(int *a,int size)    //堆排序
{
    int i;
    BuildHeap(a,size);
    for(i=size;i>=1;i--)
    {
        //cout<<a[1]<<" ";
        swap(a[1],a[i]);           //交换堆顶和最后一个元素，即每次将剩余元素中的最大者放到最后面
          //BuildHeap(a,i-1);        //将余下元素重新建立为大顶堆
          HeapAdjust(a,1,i-1);      //重新调整堆顶节点成为大顶堆
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




