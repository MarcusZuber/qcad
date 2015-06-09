// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSharedPointerTextEntity.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RExporter.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSharedPointerTextBasedEntity.h"
                 void REcmaSharedPointerTextEntity::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RTextEntityPointer*) 0)));
        protoCreated = true;
    }

    
        // primary base class RTextBasedEntity:
        
            proto->setPrototype(engine.defaultPrototype(
            qMetaTypeId<RTextBasedEntityPointer>()));
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
        // shared pointer support:
        REcmaHelper::registerFunction(&engine, proto, data, "data");
        

        REcmaHelper::registerFunction(&engine, proto, isNull, "isNull");
        

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RTextBasedEntity
        REcmaHelper::registerFunction(&engine, proto, getRTextBasedEntity, "getRTextBasedEntity");
        
        // conversion for base class REntity
        REcmaHelper::registerFunction(&engine, proto, getREntity, "getREntity");
        
        // conversion for base class RObject
        REcmaHelper::registerFunction(&engine, proto, getRObject, "getRObject");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, clone, "clone");
            
            REcmaHelper::registerFunction(&engine, proto, getType, "getType");
            
            REcmaHelper::registerFunction(&engine, proto, getData, "getData");
            
            REcmaHelper::registerFunction(&engine, proto, setData, "setData");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RTextEntityPointer>(), *proto);
      
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, init, "init");
            
            REcmaHelper::registerFunction(&engine, &ctor, getStaticPropertyTypeIds, "getStaticPropertyTypeIds");
            

    // static properties:
    
            ctor.setProperty("PropertyCustom",
                qScriptValueFromValue(&engine, RTextEntity::PropertyCustom),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyHandle",
                qScriptValueFromValue(&engine, RTextEntity::PropertyHandle),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyProtected",
                qScriptValueFromValue(&engine, RTextEntity::PropertyProtected),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyType",
                qScriptValueFromValue(&engine, RTextEntity::PropertyType),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyBlock",
                qScriptValueFromValue(&engine, RTextEntity::PropertyBlock),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLayer",
                qScriptValueFromValue(&engine, RTextEntity::PropertyLayer),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLinetype",
                qScriptValueFromValue(&engine, RTextEntity::PropertyLinetype),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLinetypeScale",
                qScriptValueFromValue(&engine, RTextEntity::PropertyLinetypeScale),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLineweight",
                qScriptValueFromValue(&engine, RTextEntity::PropertyLineweight),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyColor",
                qScriptValueFromValue(&engine, RTextEntity::PropertyColor),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDisplayedColor",
                qScriptValueFromValue(&engine, RTextEntity::PropertyDisplayedColor),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDrawOrder",
                qScriptValueFromValue(&engine, RTextEntity::PropertyDrawOrder),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertySimple",
                qScriptValueFromValue(&engine, RTextEntity::PropertySimple),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyPositionX",
                qScriptValueFromValue(&engine, RTextEntity::PropertyPositionX),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyPositionY",
                qScriptValueFromValue(&engine, RTextEntity::PropertyPositionY),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyPositionZ",
                qScriptValueFromValue(&engine, RTextEntity::PropertyPositionZ),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyText",
                qScriptValueFromValue(&engine, RTextEntity::PropertyText),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyPlainText",
                qScriptValueFromValue(&engine, RTextEntity::PropertyPlainText),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyFontName",
                qScriptValueFromValue(&engine, RTextEntity::PropertyFontName),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyHeight",
                qScriptValueFromValue(&engine, RTextEntity::PropertyHeight),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyAngle",
                qScriptValueFromValue(&engine, RTextEntity::PropertyAngle),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyXScale",
                qScriptValueFromValue(&engine, RTextEntity::PropertyXScale),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyBold",
                qScriptValueFromValue(&engine, RTextEntity::PropertyBold),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyItalic",
                qScriptValueFromValue(&engine, RTextEntity::PropertyItalic),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLineSpacingFactor",
                qScriptValueFromValue(&engine, RTextEntity::PropertyLineSpacingFactor),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyHAlign",
                qScriptValueFromValue(&engine, RTextEntity::PropertyHAlign),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyVAlign",
                qScriptValueFromValue(&engine, RTextEntity::PropertyVAlign),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RTextEntityPointer",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSharedPointerTextEntity::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextEntity(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocument * */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RTextData */
            
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RTextEntity: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RTextData*
                    ap1 =
                    qscriptvalue_cast<
                    RTextData*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RTextEntity: Argument 1 is not of type RTextData.",
                               context);                    
                    }
                    RTextData 
                    a1 = 
                    *ap1;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RTextEntity
                    * cppResult =
                    new
                    RTextEntity
                    (
                    a0
        ,
    a1
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocument * */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RTextData */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: RObject::Id */
            
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RTextEntity: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RTextData*
                    ap1 =
                    qscriptvalue_cast<
                    RTextData*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RTextEntity: Argument 1 is not of type RTextData.",
                               context);                    
                    }
                    RTextData 
                    a1 = 
                    *ap1;
                
                    // argument isStandardType
                    RObject::Id
                    a2 =
                    (RObject::Id)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RTextEntity
                    * cppResult =
                    new
                    RTextEntity
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextEntity(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSharedPointerTextEntity::getRTextBasedEntity(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RTextBasedEntity* cppResult =
                    qscriptvalue_cast<RTextEntity*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSharedPointerTextEntity::getREntity(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntity* cppResult =
                    qscriptvalue_cast<RTextEntity*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSharedPointerTextEntity::getRObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RObject* cppResult =
                    qscriptvalue_cast<RTextEntity*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSharedPointerTextEntity::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RTextEntity"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSharedPointerTextEntity::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RTextBasedEntity");
    
        list.append("REntity");
    
        list.append("RObject");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSharedPointerTextEntity::init
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerTextEntity::init", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerTextEntity::init";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RTextEntity::
       init();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEntity.init().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerTextEntity::init", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerTextEntity::getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerTextEntity::getStaticPropertyTypeIds", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerTextEntity::getStaticPropertyTypeIds";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QSet < RPropertyTypeId >'
    QSet < RPropertyTypeId > cppResult =
        RTextEntity::
       getStaticPropertyTypeIds();
        // return type: QSet < RPropertyTypeId >
                // QSet (convert to QVariantList):
                result = REcmaHelper::setToScriptValue(engine, cppResult);

                
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEntity.getStaticPropertyTypeIds().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerTextEntity::getStaticPropertyTypeIds", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerTextEntity::clone
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerTextEntity::clone", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerTextEntity::clone";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextEntity* self = 
                        getSelf("clone", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RTextEntity *'
    RTextEntity * cppResult =
        
               self->clone();
        // return type: RTextEntity *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEntity.clone().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerTextEntity::clone", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerTextEntity::getType
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerTextEntity::getType", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerTextEntity::getType";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextEntity* self = 
                        getSelf("getType", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RS::EntityType'
    RS::EntityType cppResult =
        
               self->getType();
        // return type: RS::EntityType
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEntity.getType().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerTextEntity::getType", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerTextEntity::getData
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerTextEntity::getData", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerTextEntity::getData";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextEntity* self = 
                        getSelf("getData", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RTextData &'
    
            // stripped reference:
            RTextData cppResult =
        
               self->getData();
        // return type: RTextData &
                result = engine->newVariant(
                QVariant::fromValue(cppResult));
            
    } else


        
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'const RTextData &'
    const RTextData & cppResult =
        
               self->getData();
        // return type: const RTextData &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEntity.getData().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerTextEntity::getData", context, engine);
            return result;
        }
         QScriptValue
        REcmaSharedPointerTextEntity::setData
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSharedPointerTextEntity::setData", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSharedPointerTextEntity::setData";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextEntity* self = 
                        getSelf("setData", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RTextData */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RTextData*
                    ap0 =
                    qscriptvalue_cast<
                    RTextData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RTextEntity: Argument 0 is not of type RTextData.",
                               context);                    
                    }
                    RTextData 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setData(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextEntity.setData().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSharedPointerTextEntity::setData", context, engine);
            return result;
        }
         QScriptValue REcmaSharedPointerTextEntity::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextEntity* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RTextEntityPointer(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSharedPointerTextEntity::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RTextEntity* self = getSelf("RTextEntity", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RTextEntity* REcmaSharedPointerTextEntity::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RTextEntity* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RTextEntityPointer >(context->thisObject())
                
                    ->data()
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RTextEntity.%1(): "
                        "This object is not a RTextEntity").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RTextEntity* REcmaSharedPointerTextEntity::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RTextEntity* selfBase = getSelf(fName, context);
                RTextEntity* self = dynamic_cast<RTextEntity*>(selfBase);
                //return REcmaHelper::scriptValueTo<RTextEntity >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RTextEntity.%1(): "
                    "This object is not a RTextEntity").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaSharedPointerTextEntity::data
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextEntity* self = getSelf("data", context);
    return qScriptValueFromValue(engine, self);
    }
     QScriptValue REcmaSharedPointerTextEntity::isNull
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextEntityPointer* self = REcmaHelper::scriptValueTo<RTextEntityPointer >(context->thisObject());

    //RTextEntity* self = getSelf("isNull", context);
    //Q_ASSERT(self!=NULL);
    if (self==NULL) {
        return REcmaHelper::throwError("self is NULL", context);
    }
    return qScriptValueFromValue(engine, self->isNull());
    }
    