思路：当有数据要入队的时候，我们就让它压入stack1，
要进行pop操作的时候，我们就把stack1里面的数据全部压入stack2中，stack2不为空的话就可以直接进行stack2.pop（）；

void push(const T& data)
{
    s1.push(data);
}

void pop(){
  if(s1.empty() && s2.empty()){
    cout<<"queue empty"<<endl;
  }
  if(!s2.empty()){
    s2.pop();
  }else{
    whie(!s1.empty()){
      s2.push(s1.top());
      s1.pop();
    }
  }
}
