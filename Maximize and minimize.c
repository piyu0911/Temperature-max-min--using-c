// 1  2  3  ....... 10
/* 1
  2
  3
  .
  .
  .
  31 days*/
  //Above treated as a matrix.
main()
{
  float = temp[31][10],max,min;
  int i,j,r1,c1,r2,c2; 
  clrscr();
  for(i = 0 ; i<=30;i++){
      printf("Enter the temp:");
      scanf("%f",&temp[i][j]);
  }
  max = temp[0][0];
  r1 = 0;
  c1 = 0;
  for(i=0;i<=30;i++){
      for(j=0;j<=9;j++){
          if(temp[i][j]>max){
              max = temp[i][j];
              r1 = i;
              c1 = j;
          }
      }
  }
  printf("Max temp = %f on %d day and %d city",max,r1+1,c1+1);
  min = temp[0][0];
  r2 = 0;
  c2 = 0;
  for(i=0;i<=30;i++){
      for(j=0;j<=9;j++){
          if(temp[i][j]<min){
              min = temp[i][j];
              r2 = i;
              c2 = j;
          }
      }
  }
  printf("Min Temp = %f on %d day and %d city",min,r2+1,c2+1);
  getch();
}
  
