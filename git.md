# Git

## 1.建立GitHub仓库

![image-20240908093907364](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908093907364.png)

## 2.git本地客户端安装配置

### 2.1 Windows上git本地客户端安装配置

![image-20240908094048924](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094048924.png)

![image-20240908094120905](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094120905.png)

![image-20240908094136223](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094136223.png)

![image-20240908094212767](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094212767.png)

![image-20240908094300463](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094300463.png)

![image-20240908094316953](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094316953.png)

![image-20240908094343537](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094343537.png)

### 2.2 ubuntu上本地客户端安装配置

同Windows上步骤相同。

## 3.git常用操作命令及原理

### 3.1 使用git clone将代码克隆到本地

![image-20240908094815999](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908094815999.png)

```
#将Github仓库代码克隆到本地
git clone git@github.com:tianheiyihao/HelloWorld.git
#除了将Github仓库代码克隆到本地外，git clone做了几件事：
#1.自动创建 远程仓库的名称，一般为origin,可以在HelloWorld文件夹下，使用git remote查看
#2.创建本地仓库，生成一个默认的主干分支，一般为master或main，可以在HelloWorld文件夹下，使用git branch查看
```

### 3.2 git branch

`git branch` 命令**用于管理和查看本地的分支**。具体来说，它有几个常用的用法：

- `git branch`：列出所有本地分支，并标记出当前所在的分支。
- `git branch <branch-name>`：创建一个新的分支，但不会自动切换到新分支上。
- `git branch -d <branch-name>`：删除指定的分支。如果分支包含未合并的更改，Git 会警告你。
- `git branch -D <branch-name>`：强制删除指定的分支，无论它是否包含未合并的更改。

如果你想查看远程分支，可以使用：

- `git branch -r`：列出所有远程分支。
- `git branch -a`：列出所有本地和远程分支。

### 3.3 git remote

`git remote` 是用来管理和显示远程仓库的命令。具体来说：

- `git remote`：**列出所有已配置的远程仓库的名称**。

### 3.4 git status

`git status` 是 Git 中一个非常有用的命令，它可以**显示当前工作目录和暂存区的状态**。使用 `git status` 后，你可以看到：

- 当前分支的名称
- 工作目录和暂存区的变更情况（哪些文件被修改了、哪些文件是新增的或删除的）
- 是否有未暂存的更改
- 是否有文件需要被提交到版本库中
- 可能的未追踪文件

### 3.5 git add

`git add` 是 Git 版本控制系统中的一个命令，用于**将工作区中的更改添加到暂存区**（也称为索引区）。暂存区是一个中间区域，用于准备即将提交到仓库中的更改。

当你对仓库中的文件进行修改、添加或删除后，这些更改最初只会出现在工作区中。为了让 Git 跟踪这些更改，你需要使用 `git add` 命令将它们添加到暂存区。

### 3.6 git commit

`git commit` 是 Git 版本控制系统中的一个命令，用于**将暂存区（staging area）中的更改提交到本地仓库**。每次你执行 `git commit` 时，都会创建一个新的提交（commit），记录下当前的更改状态和一些描述信息。

以下是 `git commit` 的常见用法：

1. **基本用法**：

   ```
   git commit -m "关于修改代码的一些说明"
   ```

   

   这个命令会将暂存区中的所有更改提交到本地仓库，并使用 `-m` 选项指定提交信息。

2. **提交并跳过暂存区**：
   如果你想直接提交工作目录中的更改（而不是通过暂存区），可以使用 `-a` 选项：

   ```
   git commit -a -m "关于修改代码的一些说明"
   ```

   

   注意，这样只会提交已经跟踪的文件的更改，新增的文件需要先用 `git add` 命令添加到暂存区。

3. **提交并编辑提交信息**：
   如果你不使用 `-m` 选项，Git 会启动默认文本编辑器，让你输入提交信息：

   ```
   git commit
   ```

   

   在编辑器中输入提交信息并保存退出即可。

4. **查看提交历史**：
   提交后，你可以使用 `git log` 查看提交历史：

   ```
   git log
   ```

![image-20240908101758243](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908101758243.png)

在哪个分支上修改的就会提交到本地仓库的哪个分支上。

### 3.7 git push

`git push` 是 Git 中用于将本地仓库的提交推送到远程仓库的命令。使用 `git push` 可以将你在本地做出的更改共享给其他团队成员或将其备份到远程仓库。

以下是 `git push` 的一些常见用法：

1. **基本用法**：

   ```
   git push origin branch-name
   ```

   

   这个命令将本地的 `branch-name` 分支推送到远程仓库 `origin`。`origin` 是默认的远程仓库名称，`branch-name` 是你要推送的分支名。

2. **推送所有分支**：
   如果你想将所有本地分支推送到远程仓库，可以使用：

   ```
   git push --all origin
   ```

   

   这会将所有分支推送到远程仓库 `origin`。

3. **推送标签**：
   如果你想推送本地标签到远程仓库，可以使用：

   ```
   git push origin tag-name
   ```

   

   其中 `tag-name` 是你要推送的标签名。

4. **强制推送**：
   有时你可能需要强制推送以覆盖远程仓库中的某些更改（例如，在历史重写后），可以使用：

   ```
   git push --force origin branch-name
   ```

   

   **注意：** 强制推送可能会覆盖远程仓库中的提交，因此在使用时需要小心。

5. **推送到默认远程仓库**：
   如果你之前已经设置了默认的远程仓库和分支，你可以简单地使用：

   ```
   git push
   ```

   

   这个命令会将更改推送到默认配置的远程仓库和分支。

![image-20240908102609538](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908102609538.png)

### 3.8 git log

1. **查看提交历史**：
   提交后，你可以使用 `git log` 查看提交历史：

   ```
   git log
   ```

![image-20240908102734622](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908102734622.png)

### 3.9 git pull

`git pull` 是一个 Git 命令，用于从远程仓库获取最新的代码并合并到本地仓库中。具体来说，它会执行两步操作：

1. **`git fetch`**：从远程仓库下载最新的提交和分支信息。
2. **`git merge`**：将下载的提交合并到当前分支。

使用这个命令时，可以按以下步骤操作：

1. 打开终端或命令行工具。
2. 导航到你本地的 Git 仓库目录。
3. 输入 `git pull` 并回车。

如果你想从指定的远程仓库和分支进行拉取，可以使用：

```
git pull <远程仓库名> <分支名>
```



例如：

```
git pull origin main
```



这会从 `origin` 远程仓库的 `main` 分支拉取最新的更改并合并到当前分支。

### 4.0 常用命令总结

![image-20240908104557819](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908104557819.png)

![image-20240908110923233](C:\Users\LXX\AppData\Roaming\Typora\typora-user-images\image-20240908110923233.png)