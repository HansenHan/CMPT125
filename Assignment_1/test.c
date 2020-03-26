int func(int n)
{
  int s = 0;
  int tmp = n+1;
  for(int i=1; i<=n; i++)
  {
    s = tmp + i;
    tmp = s; 
  }
return s;
}
