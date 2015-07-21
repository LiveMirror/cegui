// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "PropertyDim.pypp.hpp"

namespace bp = boost::python;

struct PropertyDim_wrapper : CEGUI::PropertyDim, bp::wrapper< CEGUI::PropertyDim > {

    PropertyDim_wrapper(CEGUI::PropertyDim const & arg )
    : CEGUI::PropertyDim( arg )
      , bp::wrapper< CEGUI::PropertyDim >(){
        // copy constructor
        
    }

    PropertyDim_wrapper( )
    : CEGUI::PropertyDim( )
      , bp::wrapper< CEGUI::PropertyDim >(){
        // null constructor
    
    }

    PropertyDim_wrapper(::CEGUI::String const & name, ::CEGUI::String const & property, ::CEGUI::DimensionType type )
    : CEGUI::PropertyDim( boost::ref(name), boost::ref(property), type )
      , bp::wrapper< CEGUI::PropertyDim >(){
        // constructor
    
    }

    virtual ::CEGUI::BaseDim * clone(  ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone(  );
        else{
            return this->CEGUI::PropertyDim::clone(  );
        }
    }
    
    ::CEGUI::BaseDim * default_clone(  ) const  {
        return CEGUI::PropertyDim::clone( );
    }

    virtual float getValue( ::CEGUI::Window const & wnd ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue( boost::ref(wnd) );
        else{
            return this->CEGUI::PropertyDim::getValue( boost::ref(wnd) );
        }
    }
    
    float default_getValue( ::CEGUI::Window const & wnd ) const  {
        return CEGUI::PropertyDim::getValue( boost::ref(wnd) );
    }

    virtual float getValue( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const  {
        if( bp::override func_getValue = this->get_override( "getValue" ) )
            return func_getValue( boost::ref(wnd), boost::ref(container) );
        else{
            return this->CEGUI::PropertyDim::getValue( boost::ref(wnd), boost::ref(container) );
        }
    }
    
    float default_getValue( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const  {
        return CEGUI::PropertyDim::getValue( boost::ref(wnd), boost::ref(container) );
    }

    virtual void writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementAttributes_impl = this->get_override( "writeXMLElementAttributes_impl" ) )
            func_writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
    }

    virtual void writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementName_impl = this->get_override( "writeXMLElementName_impl" ) )
            func_writeXMLElementName_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDim::writeXMLElementName_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDim::writeXMLElementName_impl( boost::ref(xml_stream) );
    }

    virtual bool handleFontRenderSizeChange( ::CEGUI::Window & window, ::CEGUI::Font const * font ) const  {
        if( bp::override func_handleFontRenderSizeChange = this->get_override( "handleFontRenderSizeChange" ) )
            return func_handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
        else{
            return this->CEGUI::BaseDim::handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
        }
    }
    
    bool default_handleFontRenderSizeChange( ::CEGUI::Window & window, ::CEGUI::Font const * font ) const  {
        return CEGUI::BaseDim::handleFontRenderSizeChange( boost::ref(window), boost::python::ptr(font) );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::BaseDim::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::BaseDim::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_PropertyDim_class(){

    { //::CEGUI::PropertyDim
        typedef bp::class_< PropertyDim_wrapper, bp::bases< CEGUI::BaseDim > > PropertyDim_exposer_t;
        PropertyDim_exposer_t PropertyDim_exposer = PropertyDim_exposer_t( "PropertyDim", "*!\n\
        \n\
            Dimension type that represents the value of a Window property.\n\
            Implements BaseDim interface.\n\
        *\n", bp::init< >() );
        bp::scope PropertyDim_scope( PropertyDim_exposer );
        PropertyDim_exposer.def( bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::DimensionType >(( bp::arg("name"), bp::arg("property"), bp::arg("type") ), "*!\n\
            \n\
                Constructor.\n\
        \n\
            @param name\n\
                String holding the name suffix of the window on which the property\n\
                is to be accessed.\n\
        \n\
            @param property\n\
                String object holding the name of the property this PropertyDim\n\
                represents the value of.  The property named should represent either\n\
                a UDim value or a simple float value - dependning upon what  type\n\
                is specified as.\n\
        \n\
            @param type\n\
                DimensionType value indicating what dimension named property\n\
                represents.  The possible DimensionType values are as follows:\n\
                - DT_INVALID the property should represent a simple float value.\n\
                - DT_WIDTH the property should represent a UDim value where the\n\
                scale is relative to the targetted Window's width.\n\
                - DT_HEIGHT the property should represent a UDim value where the\n\
                scale is relative to the targetted Window's height.\n\
                - All other values will cause an InvalidRequestException exception\n\
                to be thrown.\n\
            *\n") );
        { //::CEGUI::PropertyDim::clone
        
            typedef ::CEGUI::BaseDim * ( ::CEGUI::PropertyDim::*clone_function_type )(  ) const;
            typedef ::CEGUI::BaseDim * ( PropertyDim_wrapper::*default_clone_function_type )(  ) const;
            
            PropertyDim_exposer.def( 
                "clone"
                , clone_function_type(&::CEGUI::PropertyDim::clone)
                , default_clone_function_type(&PropertyDim_wrapper::default_clone)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::PropertyDim::getPropertyName
        
            typedef ::CEGUI::String const & ( ::CEGUI::PropertyDim::*getPropertyName_function_type )(  ) const;
            
            PropertyDim_exposer.def( 
                "getPropertyName"
                , getPropertyName_function_type( &::CEGUI::PropertyDim::getPropertyName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Get the name of the property to use for this WidgetDim.\n\
            \n\
                @return\n\
                    String object holding the name of the property.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDim::getSourceDimension
        
            typedef ::CEGUI::DimensionType ( ::CEGUI::PropertyDim::*getSourceDimension_function_type )(  ) const;
            
            PropertyDim_exposer.def( 
                "getSourceDimension"
                , getSourceDimension_function_type( &::CEGUI::PropertyDim::getSourceDimension )
                , "*!\n\
                \n\
                    Gets the source dimension type for this WidgetDim.\n\
            \n\
                @return\n\
                    DimensionType value indicating which dimension of the target window to\n\
                    use as the reference  base value when accessing a property that\n\
                    represents a unified dimension:\n\
                        - DT_INVALID if the property does not represent a unified dim.\n\
                        - DT_WIDTH to use target width as reference value.\n\
                        - DT_HEIGHT to use target hight as reference value.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDim::getValue
        
            typedef float ( ::CEGUI::PropertyDim::*getValue_function_type )( ::CEGUI::Window const & ) const;
            typedef float ( PropertyDim_wrapper::*default_getValue_function_type )( ::CEGUI::Window const & ) const;
            
            PropertyDim_exposer.def( 
                "getValue"
                , getValue_function_type(&::CEGUI::PropertyDim::getValue)
                , default_getValue_function_type(&PropertyDim_wrapper::default_getValue)
                , ( bp::arg("wnd") ) );
        
        }
        { //::CEGUI::PropertyDim::getValue
        
            typedef float ( ::CEGUI::PropertyDim::*getValue_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            typedef float ( PropertyDim_wrapper::*default_getValue_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            
            PropertyDim_exposer.def( 
                "getValue"
                , getValue_function_type(&::CEGUI::PropertyDim::getValue)
                , default_getValue_function_type(&PropertyDim_wrapper::default_getValue)
                , ( bp::arg("wnd"), bp::arg("container") ) );
        
        }
        { //::CEGUI::PropertyDim::getWidgetName
        
            typedef ::CEGUI::String const & ( ::CEGUI::PropertyDim::*getWidgetName_function_type )(  ) const;
            
            PropertyDim_exposer.def( 
                "getWidgetName"
                , getWidgetName_function_type( &::CEGUI::PropertyDim::getWidgetName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Constructor.\n\
            \n\
                @param name\n\
                    String holding the name suffix of the window on which the property\n\
                    is to be accessed.\n\
            \n\
                @param property\n\
                    String object holding the name of the property this PropertyDim\n\
                    represents the value of.  The property named should represent either\n\
                    a UDim value or a simple float value - dependning upon what  type\n\
                    is specified as.\n\
            \n\
                @param type\n\
                    DimensionType value indicating what dimension named property\n\
                    represents.  The possible DimensionType values are as follows:\n\
                    - DT_INVALID the property should represent a simple float value.\n\
                    - DT_WIDTH the property should represent a UDim value where the\n\
                    scale is relative to the targetted Window's width.\n\
                    - DT_HEIGHT the property should represent a UDim value where the\n\
                    scale is relative to the targetted Window's height.\n\
                    - All other values will cause an InvalidRequestException exception\n\
                    to be thrown.\n\
                *\n\
                *!\n\
                \n\
                    Get the name suffix to use for this WidgetDim.\n\
            \n\
                @return\n\
                    String object holding the name suffix for a windowwidget.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDim::setPropertyName
        
            typedef void ( ::CEGUI::PropertyDim::*setPropertyName_function_type )( ::CEGUI::String const & ) ;
            
            PropertyDim_exposer.def( 
                "setPropertyName"
                , setPropertyName_function_type( &::CEGUI::PropertyDim::setPropertyName )
                , ( bp::arg("property") )
                , "*!\n\
                \n\
                    Set the name of the property to use for this WidgetDim.\n\
            \n\
                @param property\n\
                    String object holding the name of the property.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDim::setSourceDimension
        
            typedef void ( ::CEGUI::PropertyDim::*setSourceDimension_function_type )( ::CEGUI::DimensionType ) ;
            
            PropertyDim_exposer.def( 
                "setSourceDimension"
                , setSourceDimension_function_type( &::CEGUI::PropertyDim::setSourceDimension )
                , ( bp::arg("dim") )
                , "*!\n\
                \n\
                    Sets the source dimension type for this WidgetDim.\n\
            \n\
                @param dim\n\
                    DimensionType value indicating which dimension of the target window to\n\
                    use as the reference  base value when accessing a property that\n\
                    represents a unified dimension:\n\
                        - DT_INVALID if the property does not represent a unified dim.\n\
                        - DT_WIDTH to use target width as reference value.\n\
                        - DT_HEIGHT to use target hight as reference value.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDim::setWidgetName
        
            typedef void ( ::CEGUI::PropertyDim::*setWidgetName_function_type )( ::CEGUI::String const & ) ;
            
            PropertyDim_exposer.def( 
                "setWidgetName"
                , setWidgetName_function_type( &::CEGUI::PropertyDim::setWidgetName )
                , ( bp::arg("name") )
                , "*!\n\
                \n\
                    Set the name suffix to use for this WidgetDim.\n\
            \n\
                @param name\n\
                    String object holding the name suffix for a windowwidget.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDim::writeXMLElementAttributes_impl
        
            typedef void ( PropertyDim_wrapper::*writeXMLElementAttributes_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDim_exposer.def( 
                "writeXMLElementAttributes_impl"
                , writeXMLElementAttributes_impl_function_type( &PropertyDim_wrapper::default_writeXMLElementAttributes_impl )
                , ( bp::arg("xml_stream") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::PropertyDim::writeXMLElementName_impl
        
            typedef void ( PropertyDim_wrapper::*writeXMLElementName_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDim_exposer.def( 
                "writeXMLElementName_impl"
                , writeXMLElementName_impl_function_type( &PropertyDim_wrapper::default_writeXMLElementName_impl )
                , ( bp::arg("xml_stream") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::BaseDim::handleFontRenderSizeChange
        
            typedef bool ( ::CEGUI::BaseDim::*handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            typedef bool ( PropertyDim_wrapper::*default_handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            
            PropertyDim_exposer.def( 
                "handleFontRenderSizeChange"
                , handleFontRenderSizeChange_function_type(&::CEGUI::BaseDim::handleFontRenderSizeChange)
                , default_handleFontRenderSizeChange_function_type(&PropertyDim_wrapper::default_handleFontRenderSizeChange)
                , ( bp::arg("window"), bp::arg("font") ) );
        
        }
        { //::CEGUI::BaseDim::writeXMLToStream
        
            typedef void ( ::CEGUI::BaseDim::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( PropertyDim_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDim_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::BaseDim::writeXMLToStream)
                , default_writeXMLToStream_function_type(&PropertyDim_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
