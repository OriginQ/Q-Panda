#include "pybind11/pybind11.h"
#include "pybind11/stl.h"
#include "QRunesGenerator/QRGateController.h"
#include "QRunesGenerator/QRLib.h"
#include "QRunesGenerator/QAlgorithm.h"

#include <map>
using namespace QRunes;

using std::map;
using std::string;
namespace py = pybind11;


PYBIND11_MODULE(pyQPanda, m)
{
    m.doc() = "document";
#if 1
    m.def("Hadamard", &Hadamard,"Hadamard");
    m.def("CNOT",&CNOT,"CNOT");
    m.def("BEGIN_DAGGER", &BEGIN_DAGGER, "BEGIN_DAGGER");
    m.def("END_DAGGER", &END_DAGGER, "END_DAGGER");
    m.def("BEGIN_CONTROL", &BEGIN_CONTROL, "BEGIN_CONTROL");
    m.def("END_CONTROL", &END_CONTROL, "END_CONTROL");
    m.def("RX", &RX, "RX");
    m.def("X", &X, "X");
    m.def("RY", &RY, "RY");
    m.def("RZ", &RZ, "RZ");
    m.def("CR", &CR, "CR");
    m.def("Measure", &Measure, "Measure");
    m.def("Toffoli", &Toffoli, "Toffoli");
 
    py::class_<qubit>(m, "qubit")
        .def("getQID", &qubit::getQID);
    py::class_<ancilla>(m, "ancilla")
        .def("getQID", &ancilla::getQID);

    m.def("qft", &qft, "Quantum fourier transform");
    m.def("qftreverse", &qftreverse, "Quantum fourier transform reverse");
    m.def("simple_qft", &simple_qft, "Simple quantum fourier transform");
    m.def("classical2quantum", &classical2quantum, "classical2quantum");
    m.def("qAdder", &qAdder, "qAdder");
    m.def("cAdder", &cAdder, "cAdder");
    m.def("shor15q",&shor15q,"shor15q");
    m.def("shortest2", &shortest2, "shortest2");
    m.def("disquantumwalk", &disquantumwalk, "disquantumwalk");
    m.def("discretequantumwalkstep", &discretequantumwalkstep, "discretequantumwalkstep");
    m.def("Hadamardgate", &Hadamardgate, "Hadamardgate");
    m.def("measurement", &measurement, "measurement");
#endif
}