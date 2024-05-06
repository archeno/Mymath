## 项目说明
 本项目是基于现代cmake构建系统，包括基于对象方式传递依赖和通过find_package引入第三方依赖，
 通过GTest开源框架进行测试，通过Github Workflow 进行自动化测试
## 文档内容
### CMake语法
- 现代CMake 基于包的管理方式
- 添加库 `add_library`
- 引用外部资源 `find_package`
### Makefile
- 构建 `make config`
- 编译 `make build`
- 清除  `make clean`
### Github Workflow
添加 workflow  当仓库被 push时，自动执行构建和运行测试
### 维护
- **冯阳**
- **yfeng880@163.com**

