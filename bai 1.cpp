//xóa khoản chắn
# include  < stdio.h >
# include  < conio.h >
# include  < string.h >

//hàm xóa kí tự tại vị trí bất kì
void xoa(char s[100], int vt)
{
    int n = strlen(s);
    for (int i = vt =1 ; i<n; i++)
    {
        s[i-1]=s[i];
    }
    s[n-1]='\0';
}
//xóa các kí tự khoản chắn trong chuỗi
void xoacackitukhoangtrang(char s[100])
{
//duyet từ dầu chuỗi đén cuối chuỗi
	int vt = 0 ;
	for (int i = 0 ; i<strlen(s); i++)
    {
        if(s[i]=' ')
        {
            xoa(s,vt);
            i--;
        }
    }
}
