int ArraySearh(const int array_[10],int num)
{
    int i,rez;
    for (i=0;i<10;i++){
        if (num == array_[i]){
                printf("%d=%d\n",array_[i],i);
                rez = i;
       }else {
          rez =  -1;
        }
    }
    return rez;
}
