#コンパイラの指定
CC     = gcc

#コンパイルオプション
CFLAGS = 

#実行ファイル名
TARGET = out.exe

#コンパイルするファイル
SRCDIRS  = ./src

SRCS    = $(SRCDIRS:%=%/*.c)

#オブジェクトファイル
_OBJS   = $(SRCS:%.c=%.o)
OBJS   = $(notdir $(_OBJS))


#ヘッダファイルの場所

INCDIR =

#ライブラリのディレクトリ
LIBDIR  = 

#追加するライブラリファイル
LIBS    = 

 #ターゲットファイル生成
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

#オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	-del $(OBJS) ; del $(TARGET)