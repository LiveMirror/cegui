// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "SectionSpecification.pypp.hpp"

namespace bp = boost::python;

void register_SectionSpecification_class(){

    { //::CEGUI::SectionSpecification
        typedef bp::class_< CEGUI::SectionSpecification > SectionSpecification_exposer_t;
        SectionSpecification_exposer_t SectionSpecification_exposer = SectionSpecification_exposer_t( "SectionSpecification", bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const & >(( bp::arg("owner"), bp::arg("sectionName"), bp::arg("controlPropertySource"), bp::arg("controlPropertyValue"), bp::arg("controlPropertyWidget") )) );
        bp::scope SectionSpecification_scope( SectionSpecification_exposer );
        SectionSpecification_exposer.def( bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, CEGUI::ColourRect const & >(( bp::arg("owner"), bp::arg("sectionName"), bp::arg("controlPropertySource"), bp::arg("controlPropertyValue"), bp::arg("controlPropertyWidget"), bp::arg("cols") )) );
        { //::CEGUI::SectionSpecification::getOverrideColours
        
            typedef ::CEGUI::ColourRect const & ( ::CEGUI::SectionSpecification::*getOverrideColours_function_type )(  ) const;
            
            SectionSpecification_exposer.def( 
                "getOverrideColours"
                , getOverrideColours_function_type( &::CEGUI::SectionSpecification::getOverrideColours )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return the current override colours.\n\
            \n\
                    @return\n\
                        ColourRect holding the colours that will be modulated with the sections master colours\
                        if\n\
                        colour override is enabled on this SectionSpecification.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::getOwnerWidgetLookFeel
        
            typedef ::CEGUI::String const & ( ::CEGUI::SectionSpecification::*getOwnerWidgetLookFeel_function_type )(  ) const;
            
            SectionSpecification_exposer.def( 
                "getOwnerWidgetLookFeel"
                , getOwnerWidgetLookFeel_function_type( &::CEGUI::SectionSpecification::getOwnerWidgetLookFeel )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return the name of the WidgetLookFeel object containing the target section.\n\
            \n\
                    @return\n\
                        String object holding the name of the WidgetLookFeel that contains the target\
                        ImagerySection.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::getSectionName
        
            typedef ::CEGUI::String const & ( ::CEGUI::SectionSpecification::*getSectionName_function_type )(  ) const;
            
            SectionSpecification_exposer.def( 
                "getSectionName"
                , getSectionName_function_type( &::CEGUI::SectionSpecification::getSectionName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return the name of the target ImagerySection.\n\
            \n\
                    @return\n\
                        String object holding the name of the target ImagerySection.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::isUsingOverrideColours
        
            typedef bool ( ::CEGUI::SectionSpecification::*isUsingOverrideColours_function_type )(  ) const;
            
            SectionSpecification_exposer.def( 
                "isUsingOverrideColours"
                , isUsingOverrideColours_function_type( &::CEGUI::SectionSpecification::isUsingOverrideColours )
                , "*!\n\
                    \n\
                        return whether the use of override colours is enabled on this SectionSpecification.\n\
            \n\
                    @return\n\
                        - true if override colours will be used for this SectionSpecification.\n\
                        - false if override colours will not be used for this SectionSpecification.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::render
        
            typedef void ( ::CEGUI::SectionSpecification::*render_function_type )( ::CEGUI::Window &,::CEGUI::ColourRect const *,::CEGUI::Rectf const *,bool ) const;
            
            SectionSpecification_exposer.def( 
                "render"
                , render_function_type( &::CEGUI::SectionSpecification::render )
                , ( bp::arg("srcWindow"), bp::arg("modcols")=bp::object(), bp::arg("clipper")=bp::object(), bp::arg("clipToDisplay")=(bool)(false) )
                , "*!\n\
                    \n\
                        Render the section specified by this SectionSpecification.\n\
            \n\
                    @param srcWindow\n\
                        Window object to be used when calculating pixel values from BaseDim values.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::render
        
            typedef void ( ::CEGUI::SectionSpecification::*render_function_type )( ::CEGUI::Window &,::CEGUI::Rectf const &,::CEGUI::ColourRect const *,::CEGUI::Rectf const *,bool ) const;
            
            SectionSpecification_exposer.def( 
                "render"
                , render_function_type( &::CEGUI::SectionSpecification::render )
                , ( bp::arg("srcWindow"), bp::arg("baseRect"), bp::arg("modcols")=bp::object(), bp::arg("clipper")=bp::object(), bp::arg("clipToDisplay")=(bool)(false) )
                , "*!\n\
                    \n\
                        Render the section specified by this SectionSpecification.\n\
            \n\
                    @param srcWindow\n\
                        Window object to be used when calculating pixel values from BaseDim values.\n\
            \n\
                    @param baseRect\n\
                        Rect object to be used when calculating pixel values from BaseDim values.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::setOverrideColours
        
            typedef void ( ::CEGUI::SectionSpecification::*setOverrideColours_function_type )( ::CEGUI::ColourRect const & ) ;
            
            SectionSpecification_exposer.def( 
                "setOverrideColours"
                , setOverrideColours_function_type( &::CEGUI::SectionSpecification::setOverrideColours )
                , ( bp::arg("cols") )
                , "*!\n\
                    \n\
                        Set the override colours to be used by this SectionSpecification.\n\
            \n\
                    @param cols\n\
                        ColourRect describing the override colours to set for this SectionSpecification.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::setOverrideColoursPropertyIsColourRect
        
            typedef void ( ::CEGUI::SectionSpecification::*setOverrideColoursPropertyIsColourRect_function_type )( bool ) ;
            
            SectionSpecification_exposer.def( 
                "setOverrideColoursPropertyIsColourRect"
                , setOverrideColoursPropertyIsColourRect_function_type( &::CEGUI::SectionSpecification::setOverrideColoursPropertyIsColourRect )
                , ( bp::arg("setting")=(bool)(true) )
                , "*!\n\
                    \n\
                        Set whether the override colours property source represents a full ColourRect.\n\
            \n\
                    @param setting\n\
                        - true if the override colours property will access a ColourRect object.\n\
                        - false if the override colours property will access a colour object.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::setOverrideColoursPropertySource
        
            typedef void ( ::CEGUI::SectionSpecification::*setOverrideColoursPropertySource_function_type )( ::CEGUI::String const & ) ;
            
            SectionSpecification_exposer.def( 
                "setOverrideColoursPropertySource"
                , setOverrideColoursPropertySource_function_type( &::CEGUI::SectionSpecification::setOverrideColoursPropertySource )
                , ( bp::arg("property") )
                , "*!\n\
                    \n\
                        Set the name of the property where override colour values can be obtained.\n\
            \n\
                    @param property\n\
                        String containing the name of the property.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::setRenderControlPropertySource
        
            typedef void ( ::CEGUI::SectionSpecification::*setRenderControlPropertySource_function_type )( ::CEGUI::String const & ) ;
            
            SectionSpecification_exposer.def( 
                "setRenderControlPropertySource"
                , setRenderControlPropertySource_function_type( &::CEGUI::SectionSpecification::setRenderControlPropertySource )
                , ( bp::arg("property") )
                , "*!\n\
                    \n\
                        Set the name of the property that controls whether to actually\n\
                        render this section.\n\
            \n\
                    @param property\n\
                        String containing the name of the property.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::setRenderControlValue
        
            typedef void ( ::CEGUI::SectionSpecification::*setRenderControlValue_function_type )( ::CEGUI::String const & ) ;
            
            SectionSpecification_exposer.def( 
                "setRenderControlValue"
                , setRenderControlValue_function_type( &::CEGUI::SectionSpecification::setRenderControlValue )
                , ( bp::arg("value") )
                , "*!\n\
            \n\
                Set the test value used when determining whether to render this\n\
                section.\n\
                \n\
                The value set here will be compared to the current value of the\n\
                property named as the render control property, if they match the\n\
                secion will be drawn, otherwise the section will not be drawn.  If\n\
                this value is set to the empty string, the control property will\n\
                instead be treated as a boolean property.\n\
            *\n" );
        
        }
        { //::CEGUI::SectionSpecification::setRenderControlWidget
        
            typedef void ( ::CEGUI::SectionSpecification::*setRenderControlWidget_function_type )( ::CEGUI::String const & ) ;
            
            SectionSpecification_exposer.def( 
                "setRenderControlWidget"
                , setRenderControlWidget_function_type( &::CEGUI::SectionSpecification::setRenderControlWidget )
                , ( bp::arg("widget") )
                , "*!\n\
                    \n\
                        Set the widget what will be used as the source of the property\n\
                        named as the control property.\n\
            \n\
                        The value of this setting will be interpreted as follows:\n\
                        - empty string: The target widget being drawn will be the source of\n\
                          the property value.\n\
                        - '__parent__': The parent of the widget being drawn will be the\n\
                          source of the property value.\n\
                        - any other value: The value will be taken as a name and\n\
                          a child window with the specified name will be the source of the\n\
                          property value.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::setUsingOverrideColours
        
            typedef void ( ::CEGUI::SectionSpecification::*setUsingOverrideColours_function_type )( bool ) ;
            
            SectionSpecification_exposer.def( 
                "setUsingOverrideColours"
                , setUsingOverrideColours_function_type( &::CEGUI::SectionSpecification::setUsingOverrideColours )
                , ( bp::arg("setting")=(bool)(true) )
                , "*!\n\
                    \n\
                        Enable or disable the use of override colours for this section.\n\
            \n\
                    @param setting\n\
                        - true if override colours should be used for this SectionSpecification.\n\
                        - false if override colours should not be used for this SectionSpecification.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::SectionSpecification::writeXMLToStream
        
            typedef void ( ::CEGUI::SectionSpecification::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            SectionSpecification_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type( &::CEGUI::SectionSpecification::writeXMLToStream )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                    \n\
                        Writes an xml representation of this SectionSpecification to  out_stream.\n\
            \n\
                    @param xml_stream\n\
                        Stream where xml data should be output.\n\
            \n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
    }

}
