// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "MouseEventArgs.pypp.hpp"

namespace bp = boost::python;

void register_MouseEventArgs_class(){

    { //::CEGUI::MouseEventArgs
        typedef bp::class_< CEGUI::MouseEventArgs, bp::bases< CEGUI::WindowEventArgs > > MouseEventArgs_exposer_t;
        MouseEventArgs_exposer_t MouseEventArgs_exposer = MouseEventArgs_exposer_t( "MouseEventArgs", "*!\n\
        \n\
           EventArgs based class that is used for objects passed to input event handlers\n\
           concerning mouse input.\n\
        *\n", bp::init< CEGUI::Window * >(( bp::arg("wnd") )) );
        bp::scope MouseEventArgs_scope( MouseEventArgs_exposer );
        bp::implicitly_convertible< CEGUI::Window *, CEGUI::MouseEventArgs >();
        MouseEventArgs_exposer.def_readwrite( "button", &CEGUI::MouseEventArgs::button );
        MouseEventArgs_exposer.def_readwrite( "clickCount", &CEGUI::MouseEventArgs::clickCount );
        MouseEventArgs_exposer.def_readwrite( "moveDelta", &CEGUI::MouseEventArgs::moveDelta );
        MouseEventArgs_exposer.def_readwrite( "position", &CEGUI::MouseEventArgs::position );
        MouseEventArgs_exposer.def_readwrite( "sysKeys", &CEGUI::MouseEventArgs::sysKeys );
        MouseEventArgs_exposer.def_readwrite( "wheelChange", &CEGUI::MouseEventArgs::wheelChange );
    }

}
