// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "RenderTarget.pypp.hpp"

namespace bp = boost::python;

struct RenderTarget_wrapper : CEGUI::RenderTarget, bp::wrapper< CEGUI::RenderTarget > {

    RenderTarget_wrapper()
    : CEGUI::RenderTarget()
      , bp::wrapper< CEGUI::RenderTarget >(){
        // null constructor
        
    }

    virtual void activate(  ){
        bp::override func_activate = this->get_override( "activate" );
        func_activate(  );
    }

    virtual void deactivate(  ){
        bp::override func_deactivate = this->get_override( "deactivate" );
        func_deactivate(  );
    }

    virtual void draw( ::CEGUI::GeometryBuffer const & buffer ){
        bp::override func_draw = this->get_override( "draw" );
        func_draw( boost::ref(buffer) );
    }

    virtual void draw( ::CEGUI::RenderQueue const & queue ){
        bp::override func_draw = this->get_override( "draw" );
        func_draw( boost::ref(queue) );
    }

    virtual ::CEGUI::Rect< float > const & getArea(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual bool isImageryCache(  ) const {
        bp::override func_isImageryCache = this->get_override( "isImageryCache" );
        return func_isImageryCache(  );
    }

    virtual void setArea( ::CEGUI::Rect< float > const & area ){
        bp::override func_setArea = this->get_override( "setArea" );
        func_setArea( boost::ref(area) );
    }

    virtual void unprojectPoint( ::CEGUI::GeometryBuffer const & buff, ::CEGUI::Vector2< float > const & p_in, ::CEGUI::Vector2< float > & p_out ) const {
        bp::override func_unprojectPoint = this->get_override( "unprojectPoint" );
        func_unprojectPoint( boost::ref(buff), boost::ref(p_in), boost::ref(p_out) );
    }

};

void register_RenderTarget_class(){

    { //::CEGUI::RenderTarget
        typedef bp::class_< RenderTarget_wrapper, boost::noncopyable > RenderTarget_exposer_t;
        RenderTarget_exposer_t RenderTarget_exposer = RenderTarget_exposer_t( "RenderTarget" );
        bp::scope RenderTarget_scope( RenderTarget_exposer );
        { //::CEGUI::RenderTarget::activate
        
            typedef void ( ::CEGUI::RenderTarget::*activate_function_type )(  ) ;
            
            RenderTarget_exposer.def( 
                "activate"
                , bp::pure_virtual( activate_function_type(&::CEGUI::RenderTarget::activate) )
                , "*!\n\
                \n\
                    Activate the render target and put it in a state ready to be drawn to.\n\
            \n\
                \note\n\
                    You MUST call this before doing any rendering - if you do not call this,\n\
                    in the unlikely event that your application actually works, it will\n\
                    likely stop working in some future version.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::deactivate
        
            typedef void ( ::CEGUI::RenderTarget::*deactivate_function_type )(  ) ;
            
            RenderTarget_exposer.def( 
                "deactivate"
                , bp::pure_virtual( deactivate_function_type(&::CEGUI::RenderTarget::deactivate) )
                , "*!\n\
                \n\
                    Deactivate the render target after having completed rendering.\n\
            \n\
                \note\n\
                    You MUST call this after you finish rendering to the target - if you do\n\
                    not call this, in the unlikely event that your application actually\n\
                    works, it will likely stop working in some future version.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::draw
        
            typedef void ( ::CEGUI::RenderTarget::*draw_function_type )( ::CEGUI::GeometryBuffer const & ) ;
            
            RenderTarget_exposer.def( 
                "draw"
                , bp::pure_virtual( draw_function_type(&::CEGUI::RenderTarget::draw) )
                , ( bp::arg("buffer") )
                , "*!\n\
                \n\
                    Draw geometry from the given GeometryBuffer onto the surface that\n\
                    this RenderTarget represents.\n\
            \n\
                @param buffer\n\
                    GeometryBuffer object holding the geometry that should be drawn to the\n\
                    RenderTarget.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::draw
        
            typedef void ( ::CEGUI::RenderTarget::*draw_function_type )( ::CEGUI::RenderQueue const & ) ;
            
            RenderTarget_exposer.def( 
                "draw"
                , bp::pure_virtual( draw_function_type(&::CEGUI::RenderTarget::draw) )
                , ( bp::arg("queue") )
                , "*!\n\
                \n\
                    Draw geometry from the given RenderQueue onto the surface that\n\
                    this RenderTarget represents.\n\
            \n\
                @param queue\n\
                    RenderQueue object holding the geometry that should be drawn to the\n\
                    RenderTarget.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::getArea
        
            typedef ::CEGUI::Rect<float> const & ( ::CEGUI::RenderTarget::*getArea_function_type )(  ) const;
            
            RenderTarget_exposer.def( 
                "getArea"
                , bp::pure_virtual( getArea_function_type(&::CEGUI::RenderTarget::getArea) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Return the area defined for this RenderTarget.\n\
            \n\
                @return\n\
                    Rect object describing the currently defined area for this RenderTarget.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::isImageryCache
        
            typedef bool ( ::CEGUI::RenderTarget::*isImageryCache_function_type )(  ) const;
            
            RenderTarget_exposer.def( 
                "isImageryCache"
                , bp::pure_virtual( isImageryCache_function_type(&::CEGUI::RenderTarget::isImageryCache) )
                , "*!\n\
                \n\
                    Return whether the RenderTarget is an implementation that caches\n\
                    actual rendered imagery.\n\
            \n\
                    Typically it is expected that texture based RenderTargets would return\n\
                    true in response to this call.  Other types of RenderTarget, like\n\
                    view port based targets, will more likely return false.\n\
            \n\
                @return\n\
                    - true if the RenderTarget does cache rendered imagery.\n\
                    - false if the RenderTarget does not cache rendered imagery.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::setArea
        
            typedef void ( ::CEGUI::RenderTarget::*setArea_function_type )( ::CEGUI::Rect<float> const & ) ;
            
            RenderTarget_exposer.def( 
                "setArea"
                , bp::pure_virtual( setArea_function_type(&::CEGUI::RenderTarget::setArea) )
                , ( bp::arg("area") )
                , "*!\n\
                \n\
                    Set the area for this RenderTarget.  The exact action this function\n\
                    will take depends upon what the concrete class is representing.  For\n\
                    example, with a 'view port' style RenderTarget, this should set the area\n\
                    that the view port occupies on the display (or rendering window).\n\
            \n\
                @param area\n\
                    Rect object describing the new area to be assigned to the RenderTarget.\n\
            \n\
                @exception InvalidRequestException\n\
                    May be thrown if the RenderTarget does not support setting or changing\n\
                    its area, or if the area change can not be satisfied for some reason.\n\
                *\n" );
        
        }
        { //::CEGUI::RenderTarget::unprojectPoint
        
            typedef void ( ::CEGUI::RenderTarget::*unprojectPoint_function_type )( ::CEGUI::GeometryBuffer const &,::CEGUI::Vector2<float> const &,::CEGUI::Vector2<float> & ) const;
            
            RenderTarget_exposer.def( 
                "unprojectPoint"
                , bp::pure_virtual( unprojectPoint_function_type(&::CEGUI::RenderTarget::unprojectPoint) )
                , ( bp::arg("buff"), bp::arg("p_in"), bp::arg("p_out") )
                , "*!\n\
            \n\
                Take point  p_in unproject it and put the result in  p_out.\n\
                Resulting point is local to GeometryBuffer  buff.\n\
            *\n" );
        
        }
    }

}
