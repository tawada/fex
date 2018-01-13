# fex

WSL (Windows Subsystem for Linux) からWindowsのファイルエクスプローラを開きます。
ただし/mnt/c以下にのみ対応です。

コンパイル方法
```
$ gcc -o fex program.c
```

実行方法
```
$ fex
```

実行するとWSL上の実行ディレクトリに相当するWindows上のディレクトリでファイルエクスプローラが起動します。

