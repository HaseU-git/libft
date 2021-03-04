# libft

## 概要
42tokyoの課題で、C言語の標準ライブラリの中でいくつかの関数を再現するという課題に取り組んだものです。  

以下の3つの関数のみを使って、再現しました。
- malloc
- free
- write

また、再現した関数は次の通りです。
- ft_bzero.c
- ft_memcpy.c
- ft_memccpy.c
- ft_memmove.c
- ft_memchr.c
- ft_memcmp.c
- ft_strlen.c
- ft_strlcpy.c
- ft_strlcat.c
- ft_strchr.c
- ft_strrchr.c
- ft_strnstr.c
- ft_strncmp.c
- ft_atoi.c
- ft_isalpha.c
- ft_isdigit.c
- ft_isalnum.c
- ft_isascii.c
- ft_isprint.c
- ft_toupper.c
- ft_tolower.c
- ft_calloc.c
- ft_strdup.c
- ft_substr.c
- ft_strjoin.c
- ft_strtrim.c
- ft_split.c
- ft_itoa.c
- ft_strmapi.c
- ft_putchar_fd.c
- ft_putstr_fd.c
- ft_putendl_fd.c
- ft_putnbr_fd.cs

## 目的
malloc、free、writeなどの低レベルの関数などを使用し、メモリ管理の方法などを習得するのが主な目的です。  
また、Makeについての理解も深めることでコンパイルをより容易に行えるようになることも目的の一つでした。  


## 使い方
お使いのPC環境にC言語がインストールされていることを確認してください。  
以下のコマンドを順次実行してください。
```shell
git clone https://github.com/HaseU-git/libft.git
cd libft
make
```
そうすることで、それぞれの関数が書かれたcファイルがオブジェクトファイルにコンパイルされ、その後各oファイルを元に`libft.a`という名前のアーカイブファイルが作成されます。  

次に、関数を使用するためのmainファイルを作成します。  
```c
touch main.c
echo '#include "libft.h"
#include <stdio.h>
int main()
{
  //ここに使用したい関数を書く。
  //（例）
  printf("%s", ft_strjoin("hello ", "world!!\\n"));
}' > main.c
```

ここでは、ft_strjoinという関数を使用して、文字列を結合して標準出力に表示させるというプログラムを書いています。  
プログラムを書き終えたら、アーカイブファイルとメインファイルを使用してコンパイルしていきます。  

```shell
gcc main.c libft.a
./a.out
```

`hello world!!`という文字列が標準出力に出ていれば正常に動作しています。  

コンパイルしたオブジェクトファイル及びオブジェクトファイルを削除したい場合やサイコンパイルを行いたい場合は以下のコマンドを実行してください。

```
make clean  #オブジェクトファイルの削除
make fclean #オブジェクトファイルとアーカイブファイルの削除
make re     #再コンパイル
```

## 開発環境
- MacBook Pro (15-inch, 2018)
- macOS Big Sur Version 11.2.1
- Apple clang version 12.0.0 (clang-1200.0.32.29)
- GNU Make 3.81
