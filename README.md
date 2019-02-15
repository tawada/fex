# fex

WSL (Windows Subsystem for Linux) からWindowsのファイルエクスプローラを開きます。
Macでいうところのopenのコマンドに相当します.
ただし/mnt/c以下のディレクトリ(Windowsに対応する領域)にのみ対応し, それ以外のディレクトリではファイルエクスプローラを開けません。

コンパイル方法
```
$ gcc -o fex program.c
```

実行方法
```
$ fex
```

実行するとWSL上の実行ディレクトリに相当するWindows上のディレクトリでファイルエクスプローラが起動します。

