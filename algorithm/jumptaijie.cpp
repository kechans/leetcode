跳台阶：青蛙每次只有一阶或者两阶两种跳法
当有N个台阶时，有f(n-1)+f(n-2)中跳法

int jump(int n){
  if(n<=2){
    return n;
  }
  int a=1,b=2;
  for(int i=3;i<=n;i++){
    result = a+b;
    a = b;
    b = result;
  }
  return result;
}

跳台阶：青蛙每次只有一阶,两阶,n阶种跳法；

数学推导
跳上 n-1 级台阶，可以从 n-2 级跳 1 级上去，也可以从 n-3 级跳 2 级上去...，那么

f(n-1) = f(n-2) + f(n-3) + ... + f(0)
同样，跳上 n 级台阶，可以从 n-1 级跳 1 级上去，也可以从 n-2 级跳 2 级上去... ，那么

f(n) = f(n-1) + f(n-2) + ... + f(0)
综上可得
f(n) - f(n-1) = f(n-1)
即
f(n) = 2*f(n-1)

int jumpn(int n){
  result[0] = 0;
  result[1] = 1;
  result[2]=2;
  if(n<=2){
    return result[n];
  }
  for(int i=3;i<=n;i++){
    result[i] = 2*result[i-1];
  }
  return result[n];
}

