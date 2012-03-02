// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "WindowFactoryManager.pypp.hpp"

namespace bp = boost::python;

void register_WindowFactoryManager_class(){

    { //::CEGUI::WindowFactoryManager
        typedef bp::class_< CEGUI::WindowFactoryManager, bp::bases< CEGUI::Singleton< CEGUI::WindowFactoryManager > >, boost::noncopyable > WindowFactoryManager_exposer_t;
        WindowFactoryManager_exposer_t WindowFactoryManager_exposer = WindowFactoryManager_exposer_t( "WindowFactoryManager", bp::init< >("*************************************************************************\n\
           Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
           Constructs a new WindowFactoryManager object.\n\
        *\n") );
        bp::scope WindowFactoryManager_scope( WindowFactoryManager_exposer );
        { //::CEGUI::WindowFactoryManager::AliasTargetStack
            typedef bp::class_< CEGUI::WindowFactoryManager::AliasTargetStack > AliasTargetStack_exposer_t;
            AliasTargetStack_exposer_t AliasTargetStack_exposer = AliasTargetStack_exposer_t( "AliasTargetStack", "*!\n\
            \n\
                Class used to track active alias targets for Window factory types.\n\
            *\n", bp::init< >("*!\n\
            \n\
               Constructor for WindowAliasTargetStack objects\n\
            *\n") );
            bp::scope AliasTargetStack_scope( AliasTargetStack_exposer );
            { //::CEGUI::WindowFactoryManager::AliasTargetStack::getActiveTarget
            
                typedef ::CEGUI::String const & ( ::CEGUI::WindowFactoryManager::AliasTargetStack::*getActiveTarget_function_type )(  ) const;
                
                AliasTargetStack_exposer.def( 
                    "getActiveTarget"
                    , getActiveTarget_function_type( &::CEGUI::WindowFactoryManager::AliasTargetStack::getActiveTarget )
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                      \n\
                         Return a String holding the current target type for this stack\n\
                \n\
                      @return\n\
                         reference to a String object holding the currently active target type name for this\
                         stack.\n\
                      *\n" );
            
            }
            { //::CEGUI::WindowFactoryManager::AliasTargetStack::getStackedTargetCount
            
                typedef ::CEGUI::uint ( ::CEGUI::WindowFactoryManager::AliasTargetStack::*getStackedTargetCount_function_type )(  ) const;
                
                AliasTargetStack_exposer.def( 
                    "getStackedTargetCount"
                    , getStackedTargetCount_function_type( &::CEGUI::WindowFactoryManager::AliasTargetStack::getStackedTargetCount )
                    , "*!\n\
                      \n\
                         Return the number of stacked target types in the stack\n\
                \n\
                      @return\n\
                         number of target types stacked for this alias.\n\
                      *\n" );
            
            }
        }
        { //::CEGUI::WindowFactoryManager::FalagardWindowMapping
            typedef bp::class_< CEGUI::WindowFactoryManager::FalagardWindowMapping > FalagardWindowMapping_exposer_t;
            FalagardWindowMapping_exposer_t FalagardWindowMapping_exposer = FalagardWindowMapping_exposer_t( "FalagardWindowMapping", "*!\n\
            \n\
                struct used to hold mapping information required to create a falagard based window.\n\
            *\n" );
            bp::scope FalagardWindowMapping_scope( FalagardWindowMapping_exposer );
            FalagardWindowMapping_exposer.add_property( "d_baseType"
                            , bp::make_getter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_baseType
                                    , bp::return_value_policy< bp::return_by_value >() )
                            , bp::make_setter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_baseType ) );
            FalagardWindowMapping_exposer.add_property( "d_effectName"
                            , bp::make_getter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_effectName
                                    , bp::return_value_policy< bp::return_by_value >() )
                            , bp::make_setter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_effectName ) );
            FalagardWindowMapping_exposer.add_property( "d_lookName"
                            , bp::make_getter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_lookName
                                    , bp::return_value_policy< bp::return_by_value >() )
                            , bp::make_setter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_lookName ) );
            FalagardWindowMapping_exposer.add_property( "d_rendererType"
                            , bp::make_getter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_rendererType
                                    , bp::return_value_policy< bp::return_by_value >() )
                            , bp::make_setter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_rendererType ) );
            FalagardWindowMapping_exposer.add_property( "d_windowType"
                            , bp::make_getter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_windowType
                                    , bp::return_value_policy< bp::return_by_value >() )
                            , bp::make_setter( &CEGUI::WindowFactoryManager::FalagardWindowMapping::d_windowType ) );
        }
        { //::CEGUI::WindowFactoryManager::addFactory
        
            typedef void ( ::CEGUI::WindowFactoryManager::*addFactory_function_type )( ::CEGUI::WindowFactory * ) ;
            
            WindowFactoryManager_exposer.def( 
                "addFactory"
                , addFactory_function_type( &::CEGUI::WindowFactoryManager::addFactory )
                , ( bp::arg("factory") )
                , "*************************************************************************\n\
                  Public Interface\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Adds a new WindowFactory to the list of registered factories.\n\
            \n\
               @param factory\n\
                  Pointer to the WindowFactory to be added to the WindowManager.\n\
            \n\
               @return\n\
                  Nothing\n\
               \n\
               @exception NullObjectException       factory was null.\n\
               @exception AlreadyExistsException    factory provided a Window type name which is in use by\
               another registered WindowFactory.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::addFalagardWindowMapping
        
            typedef void ( ::CEGUI::WindowFactoryManager::*addFalagardWindowMapping_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const & ) ;
            
            WindowFactoryManager_exposer.def( 
                "addFalagardWindowMapping"
                , addFalagardWindowMapping_function_type( &::CEGUI::WindowFactoryManager::addFalagardWindowMapping )
                , ( bp::arg("newType"), bp::arg("targetType"), bp::arg("lookName"), bp::arg("renderer"), bp::arg("effectName")=CEGUI::String(((const char*)"")) ) );
        
        }
        { //::CEGUI::WindowFactoryManager::addWindowTypeAlias
        
            typedef void ( ::CEGUI::WindowFactoryManager::*addWindowTypeAlias_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            WindowFactoryManager_exposer.def( 
                "addWindowTypeAlias"
                , addWindowTypeAlias_function_type( &::CEGUI::WindowFactoryManager::addWindowTypeAlias )
                , ( bp::arg("aliasName"), bp::arg("targetType") )
                , "*!\n\
               \n\
                  Adds an alias for a current window type.\n\
            \n\
                  This method allows you to create an alias for a specified window type.  This means that you\
                  can then use\n\
                  either name as the type parameter when creating a window.\n\
            \n\
               \note\n\
                  You need to be careful using this system.  Creating an alias using a name that already exists\
                  will replace the previous\n\
                  mapping for that alias.  Each alias name maintains a stack, which means that it is possible to\
                  remove an alias and have the\n\
                  previous alias restored.  The windows created via an alias use the real type, so removing an\
                  alias after window creation is always\n\
                  safe (i.e. it is not the same as removing a real factory, which would cause an exception when\
                  trying to destroy a window with a missing\n\
                  factory).\n\
            \n\
               @param aliasName\n\
                  String object holding the alias name.  That is the name that  targetType will also be known as\
                  from no on.\n\
            \n\
               @param targetType\n\
                  String object holding the type window type name that is to be aliased.  This type must already\
                  exist.\n\
            \n\
               @return\n\
                  Nothing.\n\
            \n\
               @exception UnknownObjectException   thrown if  targetType is not known within the system.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getAliasIterator
        
            typedef ::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > > ( ::CEGUI::WindowFactoryManager::*getAliasIterator_function_type )(  ) const;
            
            WindowFactoryManager_exposer.def( 
                "getAliasIterator"
                , getAliasIterator_function_type( &::CEGUI::WindowFactoryManager::getAliasIterator )
                , "*!\n\
            \n\
               Return a WindowFactoryManager.TypeAliasIterator object to iterate over the defined aliases for\
               window types.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getDereferencedAliasType
        
            typedef ::CEGUI::String ( ::CEGUI::WindowFactoryManager::*getDereferencedAliasType_function_type )( ::CEGUI::String const & ) const;
            
            WindowFactoryManager_exposer.def( 
                "getDereferencedAliasType"
                , getDereferencedAliasType_function_type( &::CEGUI::WindowFactoryManager::getDereferencedAliasType )
                , ( bp::arg("type") )
                , "*!\n\
                \n\
                    Use the alias system, where required, to 'de-reference' the specified\n\
                    type to an actual window type that can be created directly (that being\n\
                    either a concrete window type, or a falagard mapped type).\n\
            \n\
                \note\n\
                    Even though implied by the above description, this method does not\n\
                    check that a factory for the final type exists; we simply say that the\n\
                    returned type is not an alias for some other type.\n\
            \n\
                @param type\n\
                    String describing the type to be de-referenced.\n\
            \n\
                @return\n\
                    String object holding a type for a window that can be created directly;\n\
                    that is, a type that does not describe an alias to some other type.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getFactory
        
            typedef ::CEGUI::WindowFactory * ( ::CEGUI::WindowFactoryManager::*getFactory_function_type )( ::CEGUI::String const & ) const;
            
            WindowFactoryManager_exposer.def( 
                "getFactory"
                , getFactory_function_type( &::CEGUI::WindowFactoryManager::getFactory )
                , ( bp::arg("type") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
               \n\
                  Return a pointer to the specified WindowFactory object.\n\
            \n\
               @param type\n\
                  String holding the Window object type to return the WindowFactory for.\n\
            \n\
               @return\n\
                  Pointer to the WindowFactory object that creates Windows of the type  type.\n\
            \n\
               @exception UnknownObjectException   No WindowFactory object for Window objects of type  type was\
               found.\n\
               *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getFalagardMappingForType
        
            typedef ::CEGUI::WindowFactoryManager::FalagardWindowMapping const & ( ::CEGUI::WindowFactoryManager::*getFalagardMappingForType_function_type )( ::CEGUI::String const & ) const;
            
            WindowFactoryManager_exposer.def( 
                "getFalagardMappingForType"
                , getFalagardMappingForType_function_type( &::CEGUI::WindowFactoryManager::getFalagardMappingForType )
                , ( bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Return the FalagardWindowMapping for the specified window mapping  type.\n\
            \n\
                @param type\n\
                    Name of a window type.  The window type referenced should be a falagard mapped type.\n\
            \n\
                @return\n\
                    FalagardWindowMapping object describing the falagard mapping.\n\
            \n\
                @exception InvalidRequestException thrown if  type is not a falagard mapping type (or maybe the\
                type didn't exist).\n\
                *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getFalagardMappingIterator
        
            typedef ::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::FalagardWindowMapping, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::FalagardWindowMapping> > > > ( ::CEGUI::WindowFactoryManager::*getFalagardMappingIterator_function_type )(  ) const;
            
            WindowFactoryManager_exposer.def( 
                "getFalagardMappingIterator"
                , getFalagardMappingIterator_function_type( &::CEGUI::WindowFactoryManager::getFalagardMappingIterator )
                , "*!\n\
            \n\
                Return a WindowFactoryManager.FalagardMappingIterator object to iterate over the defined\
                falagard window mappings.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getIterator
        
            typedef ::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > > > ( ::CEGUI::WindowFactoryManager::*getIterator_function_type )(  ) const;
            
            WindowFactoryManager_exposer.def( 
                "getIterator"
                , getIterator_function_type( &::CEGUI::WindowFactoryManager::getIterator )
                , "*!\n\
            \n\
               Return a WindowFactoryManager.WindowFactoryIterator object to iterate over the available\
               WindowFactory types.\n\
            *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getMappedLookForType
        
            typedef ::CEGUI::String const & ( ::CEGUI::WindowFactoryManager::*getMappedLookForType_function_type )( ::CEGUI::String const & ) const;
            
            WindowFactoryManager_exposer.def( 
                "getMappedLookForType"
                , getMappedLookForType_function_type( &::CEGUI::WindowFactoryManager::getMappedLookForType )
                , ( bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Return the name of the LookN'Feel assigned to the specified window mapping.\n\
            \n\
                @param type\n\
                    Name of a window type.  The window type referenced should be a falagard mapped type.\n\
            \n\
                @return\n\
                    String object holding the name of the look mapped for the requested type.\n\
            \n\
                @exception InvalidRequestException thrown if  type is not a falagard mapping type (or maybe the\
                type didn't exist).\n\
                *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::getMappedRendererForType
        
            typedef ::CEGUI::String const & ( ::CEGUI::WindowFactoryManager::*getMappedRendererForType_function_type )( ::CEGUI::String const & ) const;
            
            WindowFactoryManager_exposer.def( 
                "getMappedRendererForType"
                , getMappedRendererForType_function_type( &::CEGUI::WindowFactoryManager::getMappedRendererForType )
                , ( bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Return the name of the WindowRenderer assigned to the specified window mapping.\n\
            \n\
                @param type\n\
                    Name of a window type.  The window type referenced should be a falagard mapped type.\n\
            \n\
                @return\n\
                    String object holding the name of the window renderer mapped for the requested type.\n\
            \n\
                @exception InvalidRequestException thrown if  type is not a falagard mapping type (or maybe the\
                type didn't exist).\n\
                *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::isFactoryPresent
        
            typedef bool ( ::CEGUI::WindowFactoryManager::*isFactoryPresent_function_type )( ::CEGUI::String const & ) const;
            
            WindowFactoryManager_exposer.def( 
                "isFactoryPresent"
                , isFactoryPresent_function_type( &::CEGUI::WindowFactoryManager::isFactoryPresent )
                , ( bp::arg("name") )
                , "*!\n\
                \n\
                    Checks the list of registered WindowFactory objects, aliases, and\n\
                    falagard mapped types for one which can create Window objects of the\n\
                    specified type.\n\
            \n\
                @param name\n\
                    String containing the Window type name to check for.\n\
            \n\
                @return\n\
                    - true if a WindowFactory, alias, or falagard mapping for Window objects\n\
                      of type  name is registered.\n\
                    - false if the system knows nothing about windows of type  name.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::isFalagardMappedType
        
            typedef bool ( ::CEGUI::WindowFactoryManager::*isFalagardMappedType_function_type )( ::CEGUI::String const & ) const;
            
            WindowFactoryManager_exposer.def( 
                "isFalagardMappedType"
                , isFalagardMappedType_function_type( &::CEGUI::WindowFactoryManager::isFalagardMappedType )
                , ( bp::arg("type") )
                , "*!\n\
                \n\
                    Return whether the given type is a falagard mapped type.\n\
            \n\
                @param type\n\
                    Name of a window type.\n\
            \n\
                @return\n\
                    - true if the requested type is a Falagard mapped window type.\n\
                    - false if the requested type is a normal WindowFactory (or alias), or if the type does not\
                    exist.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::removeAllFactories
        
            typedef void ( ::CEGUI::WindowFactoryManager::*removeAllFactories_function_type )(  ) ;
            
            WindowFactoryManager_exposer.def( 
                "removeAllFactories"
                , removeAllFactories_function_type( &::CEGUI::WindowFactoryManager::removeAllFactories )
                , "*!\n\
               \n\
                  Remove all WindowFactory objects from the list.\n\
            \n\
               @return\n\
                  Nothing\n\
               *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::removeFactory
        
            typedef void ( ::CEGUI::WindowFactoryManager::*removeFactory_function_type )( ::CEGUI::String const & ) ;
            
            WindowFactoryManager_exposer.def( 
                "removeFactory"
                , removeFactory_function_type( &::CEGUI::WindowFactoryManager::removeFactory )
                , ( bp::arg("name") )
                , "*!\n\
               \n\
                  Removes a WindowFactory from the list of registered factories.\n\
                  \n\
               \note\n\
                  The WindowFactory object is not destroyed (since it was created externally), instead it is\
                  just removed from the list.\n\
            \n\
               @param name\n\
                  String which holds the name (technically, Window type name) of the WindowFactory to be\
                  removed.  If  name is not\n\
                  in the list, no error occurs (nothing happens).\n\
            \n\
               @return\n\
                  Nothing\n\
               *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::removeFactory
        
            typedef void ( ::CEGUI::WindowFactoryManager::*removeFactory_function_type )( ::CEGUI::WindowFactory * ) ;
            
            WindowFactoryManager_exposer.def( 
                "removeFactory"
                , removeFactory_function_type( &::CEGUI::WindowFactoryManager::removeFactory )
                , ( bp::arg("factory") )
                , "*!\n\
               \n\
                  Removes a WindowFactory from the list of registered factories.\n\
            \n\
               \note\n\
                  The WindowFactory object is not destroyed (since it was created externally), instead it is\
                  just removed from the list.\n\
            \n\
               @param factory\n\
                  Pointer to the factory object to be removed.  If  factory is null, or if no such WindowFactory\
                  is in the list, no\n\
                  error occurs (nothing happens).\n\
            \n\
               @return\n\
                  Nothing\n\
               *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::removeFalagardWindowMapping
        
            typedef void ( ::CEGUI::WindowFactoryManager::*removeFalagardWindowMapping_function_type )( ::CEGUI::String const & ) ;
            
            WindowFactoryManager_exposer.def( 
                "removeFalagardWindowMapping"
                , removeFalagardWindowMapping_function_type( &::CEGUI::WindowFactoryManager::removeFalagardWindowMapping )
                , ( bp::arg("type") )
                , "*!\n\
                \n\
                    Remove the specified falagard type mapping if it exists.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::WindowFactoryManager::removeWindowTypeAlias
        
            typedef void ( ::CEGUI::WindowFactoryManager::*removeWindowTypeAlias_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            WindowFactoryManager_exposer.def( 
                "removeWindowTypeAlias"
                , removeWindowTypeAlias_function_type( &::CEGUI::WindowFactoryManager::removeWindowTypeAlias )
                , ( bp::arg("aliasName"), bp::arg("targetType") )
                , "*!\n\
               \n\
                  Remove the specified alias mapping.  If the alias mapping does not exist, nothing happens.\n\
            \n\
               \note\n\
                  You are required to supply both the alias and target names because there may exist more than\
                  one entry for a given\n\
                  alias - therefore you are required to be explicit about which alias is to be removed.\n\
            \n\
               @param aliasName\n\
                  String object holding the alias name.\n\
            \n\
               @param targetType\n\
                  String object holding the type window type name that was aliased.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
    }

}
