// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "FalagardPropertyBaseImage.pypp.hpp"

namespace bp = boost::python;

struct FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper : CEGUI::FalagardPropertyBase< CEGUI::Image* >, bp::wrapper< CEGUI::FalagardPropertyBase< CEGUI::Image* > > {

    FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper(::CEGUI::String const & name, ::CEGUI::String const & help, ::CEGUI::String const & initialValue, ::CEGUI::String const & origin, bool redrawOnWrite, bool layoutOnWrite, ::CEGUI::String const & fireEvent, ::CEGUI::String const & eventNamespace )
    : CEGUI::FalagardPropertyBase<CEGUI::Image*>( boost::ref(name), boost::ref(help), boost::ref(initialValue), boost::ref(origin), redrawOnWrite, layoutOnWrite, boost::ref(fireEvent), boost::ref(eventNamespace) )
      , bp::wrapper< CEGUI::FalagardPropertyBase< CEGUI::Image* > >(){
        // constructor
    
    }

    virtual void setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Image const * const arg1 ){
        if( bp::override func_setNative_impl = this->get_override( "setNative_impl" ) )
            func_setNative_impl( boost::python::ptr(receiver), arg1 );
        else{
            this->CEGUI::FalagardPropertyBase< CEGUI::Image* >::setNative_impl( boost::python::ptr(receiver), arg1 );
        }
    }
    
    virtual void default_setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Image const * const arg1 ){
        CEGUI::FalagardPropertyBase< CEGUI::Image* >::setNative_impl( boost::python::ptr(receiver), arg1 );
    }

    virtual ::CEGUI::Property * clone(  ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    virtual bool doesWriteXML(  ) const  {
        if( bp::override func_doesWriteXML = this->get_override( "doesWriteXML" ) )
            return func_doesWriteXML(  );
        else{
            return this->CEGUI::Property::doesWriteXML(  );
        }
    }
    
    bool default_doesWriteXML(  ) const  {
        return CEGUI::Property::doesWriteXML( );
    }

    virtual ::CEGUI::String get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::Image* >::get( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::Image* >::get( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::String getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getDefault = this->get_override( "getDefault" ) )
            return func_getDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::getDefault( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::getDefault( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::Image const * getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getNative = this->get_override( "getNative" ) )
            return func_getNative( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::Image* >::getNative( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::Image const * default_getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::Image* >::getNative( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::Image const * getNative_impl( ::CEGUI::PropertyReceiver const * receiver ) const {
        bp::override func_getNative_impl = this->get_override( "getNative_impl" );
        return func_getNative_impl( boost::python::ptr(receiver) );
    }

    virtual void initialisePropertyReceiver( ::CEGUI::PropertyReceiver * arg0 ) const  {
        if( bp::override func_initialisePropertyReceiver = this->get_override( "initialisePropertyReceiver" ) )
            func_initialisePropertyReceiver( boost::python::ptr(arg0) );
        else{
            this->CEGUI::Property::initialisePropertyReceiver( boost::python::ptr(arg0) );
        }
    }
    
    void default_initialisePropertyReceiver( ::CEGUI::PropertyReceiver * arg0 ) const  {
        CEGUI::Property::initialisePropertyReceiver( boost::python::ptr(arg0) );
    }

    virtual bool isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_isDefault = this->get_override( "isDefault" ) )
            return func_isDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::isDefault( boost::python::ptr(receiver) );
        }
    }
    
    bool default_isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::isDefault( boost::python::ptr(receiver) );
    }

    virtual bool isReadable(  ) const  {
        if( bp::override func_isReadable = this->get_override( "isReadable" ) )
            return func_isReadable(  );
        else{
            return this->CEGUI::Property::isReadable(  );
        }
    }
    
    bool default_isReadable(  ) const  {
        return CEGUI::Property::isReadable( );
    }

    virtual bool isWritable(  ) const  {
        if( bp::override func_isWritable = this->get_override( "isWritable" ) )
            return func_isWritable(  );
        else{
            return this->CEGUI::Property::isWritable(  );
        }
    }
    
    bool default_isWritable(  ) const  {
        return CEGUI::Property::isWritable( );
    }

    virtual void set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            func_set( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::TypedProperty< CEGUI::Image* >::set( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        CEGUI::TypedProperty< CEGUI::Image* >::set( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Image const * const value ) {
        if( bp::override func_setNative = this->get_override( "setNative" ) )
            func_setNative( boost::python::ptr(receiver), value );
        else{
            this->CEGUI::TypedProperty< CEGUI::Image* >::setNative( boost::python::ptr(receiver), value );
        }
    }
    
    void default_setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::Image const * const value ) {
        CEGUI::TypedProperty< CEGUI::Image* >::setNative( boost::python::ptr(receiver), value );
    }

    virtual void writeDefinitionXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeDefinitionXMLAttributes = this->get_override( "writeDefinitionXMLAttributes" ) )
            func_writeDefinitionXMLAttributes( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeDefinitionXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes( boost::ref(xml_stream) );
    }

    virtual void writeDefinitionXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        bp::override func_writeDefinitionXMLElementType = this->get_override( "writeDefinitionXMLElementType" );
        func_writeDefinitionXMLElementType( boost::ref(xml_stream) );
    }

    virtual void writeDefinitionXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeDefinitionXMLToStream = this->get_override( "writeDefinitionXMLToStream" ) )
            func_writeDefinitionXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeDefinitionXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream( boost::ref(xml_stream) );
    }

    virtual void writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        else{
            this->CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
    }

};

void register_FalagardPropertyBaseImage_class(){

    { //::CEGUI::FalagardPropertyBase< CEGUI::Image* >
        typedef bp::class_< FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper, bp::bases< CEGUI::PropertyDefinitionBase, CEGUI::TypedProperty< CEGUI::Image* > >, boost::noncopyable > FalagardPropertyBaseImage_exposer_t;
        FalagardPropertyBaseImage_exposer_t FalagardPropertyBaseImage_exposer = FalagardPropertyBaseImage_exposer_t( "FalagardPropertyBaseImage", bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, bool, bool, CEGUI::String const &, CEGUI::String const & >(( bp::arg("name"), bp::arg("help"), bp::arg("initialValue"), bp::arg("origin"), bp::arg("redrawOnWrite"), bp::arg("layoutOnWrite"), bp::arg("fireEvent"), bp::arg("eventNamespace") )) );
        bp::scope FalagardPropertyBaseImage_scope( FalagardPropertyBaseImage_exposer );
        { //::CEGUI::FalagardPropertyBase< CEGUI::Image* >::setNative_impl
        
            typedef CEGUI::FalagardPropertyBase< CEGUI::Image* > exported_class_t;
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*setNative_impl_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::Image const * const ) ;
            
            FalagardPropertyBaseImage_exposer.def( 
                "setNative_impl"
                , setNative_impl_function_type( &FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_setNative_impl )
                , ( bp::arg("receiver"), bp::arg("arg1") )
                , "------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::Property::clone
        
            typedef ::CEGUI::Property * ( ::CEGUI::Property::*clone_function_type )(  ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::CEGUI::Property::clone) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Property::doesWriteXML
        
            typedef bool ( ::CEGUI::Property::*doesWriteXML_function_type )(  ) const;
            typedef bool ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_doesWriteXML_function_type )(  ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "doesWriteXML"
                , doesWriteXML_function_type(&::CEGUI::Property::doesWriteXML)
                , default_doesWriteXML_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_doesWriteXML) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Image* >::get
        
            typedef CEGUI::FalagardPropertyBase< CEGUI::Image* > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "get"
                , get_function_type(&::CEGUI::TypedProperty< CEGUI::Image* >::get)
                , default_get_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_get)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::getDefault
        
            typedef ::CEGUI::String ( ::CEGUI::Property::*getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "getDefault"
                , getDefault_function_type(&::CEGUI::Property::getDefault)
                , default_getDefault_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_getDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Image* >::getNative
        
            typedef CEGUI::FalagardPropertyBase< CEGUI::Image* > exported_class_t;
            typedef ::CEGUI::Image const * ( exported_class_t::*getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::Image const * ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "getNative"
                , getNative_function_type(&::CEGUI::TypedProperty< CEGUI::Image* >::getNative)
                , default_getNative_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_getNative)
                , ( bp::arg("receiver") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Image* >::getNative_impl
        
            typedef CEGUI::FalagardPropertyBase< CEGUI::Image* > exported_class_t;
            typedef ::CEGUI::Image const * ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*getNative_impl_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "getNative_impl"
                , getNative_impl_function_type( &FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::getNative_impl )
                , ( bp::arg("receiver") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Property::initialisePropertyReceiver
        
            typedef void ( ::CEGUI::Property::*initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "initialisePropertyReceiver"
                , initialisePropertyReceiver_function_type(&::CEGUI::Property::initialisePropertyReceiver)
                , default_initialisePropertyReceiver_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_initialisePropertyReceiver)
                , ( bp::arg("arg0") ) );
        
        }
        { //::CEGUI::Property::isDefault
        
            typedef bool ( ::CEGUI::Property::*isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef bool ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "isDefault"
                , isDefault_function_type(&::CEGUI::Property::isDefault)
                , default_isDefault_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_isDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isReadable
        
            typedef bool ( ::CEGUI::Property::*isReadable_function_type )(  ) const;
            typedef bool ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_isReadable_function_type )(  ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "isReadable"
                , isReadable_function_type(&::CEGUI::Property::isReadable)
                , default_isReadable_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_isReadable) );
        
        }
        { //::CEGUI::Property::isWritable
        
            typedef bool ( ::CEGUI::Property::*isWritable_function_type )(  ) const;
            typedef bool ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_isWritable_function_type )(  ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "isWritable"
                , isWritable_function_type(&::CEGUI::Property::isWritable)
                , default_isWritable_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_isWritable) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Image* >::set
        
            typedef CEGUI::FalagardPropertyBase< CEGUI::Image* > exported_class_t;
            typedef void ( exported_class_t::*set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            FalagardPropertyBaseImage_exposer.def( 
                "set"
                , set_function_type(&::CEGUI::TypedProperty< CEGUI::Image* >::set)
                , default_set_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_set)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::Image* >::setNative
        
            typedef CEGUI::FalagardPropertyBase< CEGUI::Image* > exported_class_t;
            typedef void ( exported_class_t::*setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::Image const * const ) ;
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::Image const * const ) ;
            
            FalagardPropertyBaseImage_exposer.def( 
                "setNative"
                , setNative_function_type(&::CEGUI::TypedProperty< CEGUI::Image* >::setNative)
                , default_setNative_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_setNative)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes
        
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*writeDefinitionXMLAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "writeDefinitionXMLAttributes"
                , writeDefinitionXMLAttributes_function_type( &FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_writeDefinitionXMLAttributes )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                \n\
                    Write out any xml attributes added in a sub-class.  Note that you\n\
                    should not write the closing '>' character sequence, nor any other\n\
                    information in this function.  You should always call the base class\n\
                    implementation of this function when overriding.\n\
            \n\
                @param xml_stream\n\
                    XMLSerializer where xml data should be output.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLElementType
        
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*writeDefinitionXMLElementType_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "writeDefinitionXMLElementType"
                , writeDefinitionXMLElementType_function_type( &FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::writeDefinitionXMLElementType )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                \n\
                    Write out the text of the XML element type.  Note that you should\n\
                    not write the opening '<' character, nor any other information such\n\
                    as attributes in this function.\n\
            \n\
                @param xml_stream\n\
                    XMLSerializer where xml data should be output.\n\
                *\n" );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream
        
            typedef void ( ::CEGUI::PropertyDefinitionBase::*writeDefinitionXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_writeDefinitionXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "writeDefinitionXMLToStream"
                , writeDefinitionXMLToStream_function_type(&::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream)
                , default_writeDefinitionXMLToStream_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_writeDefinitionXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
        { //::CEGUI::Property::writeXMLToStream
        
            typedef void ( ::CEGUI::Property::*writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            typedef void ( FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            
            FalagardPropertyBaseImage_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Property::writeXMLToStream)
                , default_writeXMLToStream_function_type(&FalagardPropertyBase_less__CEGUI_scope_Image_ptr___greater__wrapper::default_writeXMLToStream)
                , ( bp::arg("receiver"), bp::arg("xml_stream") ) );
        
        }
    }

}
