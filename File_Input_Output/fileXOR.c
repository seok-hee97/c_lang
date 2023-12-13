#include <stdio.h>
#define SECRETKEY "!@#$%^&*()_+=-"
int strlen(char *dest);
int encryption();
int main()
{
    encryption();
}
int encryption()
{
    char data[1024];
    char secret[16] = { "!@#$%^&*()_><,." };
    FILE *fp;
    size_t read_size, i;
    long frpos, fwpos;
    errno_t err;
 
    err = fopen_s(&fp, "log.txt", "rb");
    if (err != 0) {
        perror("파일 열기 에러");
        return -1;
    }
    while (!feof(fp)) {
        fwpos = ftell(fp);
        read_size = fread(data, 1, 1024, fp);
        if (read_size == 0) break;
        for (i = 0; i < read_size; i++)
            data[i] ^= secret[i % 16];
        frpos = ftell(fp);
        fseek(fp, fwpos, SEEK_SET);
        fwrite(data, 1, read_size, fp);
        fseek(fp, frpos, SEEK_SET);
    }
    fclose(fp);
    return 1;
}


int strlen(char *dest);
int main()
{
    char string[] = "1234567890";
    int n = strlen(string);
    puts(string);
    for (int i = 0; i < n; i++)
        string[i] ^= SECRETKEY[i];
    puts(string);
    for (int i = 0; i < n; i++)
        string[i] ^= SECRETKEY[i];
    puts(string);
}
int strlen(char *dest)
{
    int n = 0;
    while (*dest++) n++;
    return n;
}