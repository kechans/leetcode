https://www.cnblogs.com/Harley-Quinn/p/7419183.html//题目描述

struct Point
{
    int x, y;
};

// a[n]为从输入中读取得到的点集数组
void solution(Point* a, int n){
  sort(a,a+n,[](Point& p1, Point& p2) { return p1.x < p2.x; });//按照横坐标从小到大排列坐标点
  int ymax=INT_MIN;//记录从右往左遍历过程中y的最大值
  
  for(int i=n-1;i>=0;i--){
    if(a[i].y > ymax){ //此时a[i].y大于或等于右边所有点的最大y坐标, a[i]为最大点
      printf(a[i].x,a[i].y);
      ymax=a[i].y;//// 更新最大y坐标
    }
  }
}
