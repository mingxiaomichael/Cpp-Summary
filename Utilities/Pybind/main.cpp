#include <pybind11/pybind11.h>
#include <pybind11/eigen.h> // 用于支持Eigen数据类型的转换

namespace py = pybind11;

void update(Eigen::Ref<Eigen::MatrixXd> q){
    q(0,0) = 2;
}

PYBIND11_MODULE(module_name, m) {
    m.doc() = "This is the module docs.";
    m.def("update", &update);
}
