//https://blog.csdn.net/MoreWindows/article/details/6684558

//O(N*logN)    分治法a

//该方法的基本思想是：

//1．先从数列中取出一个数作为基准数。

//2．分区过程，将比这个数大的数全放到它的右边，小于或等于它的数全放到它的左边。

//3．再对左右区间重复第二步，直到各区间只有一个数。

//cpp version 
int AdjustArray(int src[], int left, int right) {//返回调整后基准数的位置
    int index = src[left];
    int i=left,j=right;
    while(i<j){
        // 从左向右找大于index的数来填src[j]
        while(i<j && src[i]<index){//left --> right
            i++;
        }
        if(i<j){//说明找到一个数字比index大,才能退出上边的while循环
            src[j]=src[i];
            j--;
        }
        //从右向左找比index小的数字，
        while(i<j && src[j]>=index){
            j--;
        }
        if(i<j){//找到比index小的数字，放到左边
            src[i]=src[j];
            i++;
        }
    }
    src[i] = index;//退出时，i等于j。将index填到这个坑中
    return i;
}

void asort(int src[],int left,int right){
    if(left <right){
        int current = AdjustArray(src,left,right);
        AdjustArray(src,left,current-1);
        AdjustArray(src,current+1,right);
    }
}

