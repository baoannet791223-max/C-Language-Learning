GIT保存流程
第一步
进入到git仓库：     cd E:\C_Learning
检查是否进入正确目录：   git status
正常情况下应该看到：
On branch main
Your branch is up to date with 'origin/main'.

第二步：编写或修改代码
检查修改内容：
git status
例如：
Changes not staged for commit:
    modified: CODE/C01/main.c

Untracked files:
    CODE/C01/loop.c
这里有两个概念：
状态	含义
modified	已经存在的文件被修改
untracked	新创建的文件，Git 尚未跟踪
然后使用：git diff
查看已有文件的具体修改。
第四步：添加修改
git add .
它的作用是将当前仓库中的修改添加到暂存区。
添加后检查：
git status
第五步：提交版本
git commit -m "完成循环结构练习"
推荐使用以下命名规范：
学习内容	Commit 信息
学习变量	学习变量与数据类型
学习循环	完成循环结构练习
学习数组	完成数组基础练习
学习函数	学习函数基础知识
修改代码	修复循环练习中的错误
更新笔记	更新C语言学习笔记
完善文档	完善README文档
第六步：上传到 GitHub
输入：git push
如果看到类似：
To https://github.com/...
   xxxxxxx..xxxxxxx  main -> main
   就说明上传成功。

   实际上，完成上面的学习后，你每天最常用的就是：
   git add .                                   添加修改
   git commit -m "今天完成的学习内容"          保存版本
   git push                                    上传 GitHub