#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_errors_ArgumentError
#include <flash/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_AccelerometerEvent
#include <flash/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_sensors_Accelerometer
#include <flash/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
namespace flash{
namespace sensors{

Void Accelerometer_obj::__construct()
{
HX_STACK_PUSH("Accelerometer::new","flash/sensors/Accelerometer.hx",22);
{
	HX_STACK_LINE(24)
	super::__construct(null());
	HX_STACK_LINE(26)
	this->setRequestedUpdateInterval(::flash::sensors::Accelerometer_obj::__defaultInterval);
}
;
	return null();
}

Accelerometer_obj::~Accelerometer_obj() { }

Dynamic Accelerometer_obj::__CreateEmpty() { return  new Accelerometer_obj; }
hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__new()
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Dynamic Accelerometer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Void Accelerometer_obj::__update( ){
{
		HX_STACK_PUSH("Accelerometer::__update","flash/sensors/Accelerometer.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		::flash::events::AccelerometerEvent event = ::flash::events::AccelerometerEvent_obj::__new(::flash::events::AccelerometerEvent_obj::UPDATE,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(70)
		Dynamic data = ::flash::sensors::Accelerometer_obj::nme_input_get_acceleration();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(72)
		event->timestamp = ::haxe::Timer_obj::stamp();
		HX_STACK_LINE(73)
		event->accelerationX = data->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(74)
		event->accelerationY = data->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(75)
		event->accelerationZ = data->__Field(HX_CSTRING("z"),true);
		HX_STACK_LINE(77)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,__update,(void))

Void Accelerometer_obj::setRequestedUpdateInterval( Float interval){
{
		HX_STACK_PUSH("Accelerometer::setRequestedUpdateInterval","flash/sensors/Accelerometer.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(interval,"interval");
		HX_STACK_LINE(41)
		if (((interval < (int)0))){
			HX_STACK_LINE(41)
			hx::Throw (::flash::errors::ArgumentError_obj::__new(null(),null()));
		}
		else{
			HX_STACK_LINE(45)
			if (((interval == (int)0))){
				HX_STACK_LINE(45)
				interval = ::flash::sensors::Accelerometer_obj::__defaultInterval;
			}
		}
		HX_STACK_LINE(51)
		if (((this->__timer != null()))){
			HX_STACK_LINE(51)
			this->__timer->stop();
		}
		HX_STACK_LINE(57)
		if ((::flash::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(59)
			this->__timer = ::haxe::Timer_obj::__new(interval);
			HX_STACK_LINE(60)
			this->__timer->run = this->__update_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,setRequestedUpdateInterval,(void))

Void Accelerometer_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("Accelerometer::addEventListener","flash/sensors/Accelerometer.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(33)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_STACK_LINE(34)
		this->__update();
	}
return null();
}


bool Accelerometer_obj::isSupported;

int Accelerometer_obj::__defaultInterval;

bool Accelerometer_obj::get_isSupported( ){
	HX_STACK_PUSH("Accelerometer::get_isSupported","flash/sensors/Accelerometer.hx",89);
	HX_STACK_LINE(89)
	return (::flash::sensors::Accelerometer_obj::nme_input_get_acceleration() != null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_isSupported,return )

Dynamic Accelerometer_obj::nme_input_get_acceleration;


Accelerometer_obj::Accelerometer_obj()
{
}

void Accelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accelerometer);
	HX_MARK_MEMBER_NAME(__timer,"__timer");
	HX_MARK_MEMBER_NAME(muted,"muted");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__timer,"__timer");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Accelerometer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { return __timer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { return inCallProp ? get_isSupported() : isSupported; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__defaultInterval") ) { return __defaultInterval; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_input_get_acceleration") ) { return nme_input_get_acceleration; }
		if (HX_FIELD_EQ(inName,"setRequestedUpdateInterval") ) { return setRequestedUpdateInterval_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Accelerometer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { __timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__defaultInterval") ) { __defaultInterval=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_input_get_acceleration") ) { nme_input_get_acceleration=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Accelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__timer"));
	outFields->push(HX_CSTRING("muted"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isSupported"),
	HX_CSTRING("__defaultInterval"),
	HX_CSTRING("get_isSupported"),
	HX_CSTRING("nme_input_get_acceleration"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__update"),
	HX_CSTRING("setRequestedUpdateInterval"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("__timer"),
	HX_CSTRING("muted"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__defaultInterval,"__defaultInterval");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::nme_input_get_acceleration,"nme_input_get_acceleration");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__defaultInterval,"__defaultInterval");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::nme_input_get_acceleration,"nme_input_get_acceleration");
};

Class Accelerometer_obj::__mClass;

void Accelerometer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.sensors.Accelerometer"), hx::TCanCast< Accelerometer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Accelerometer_obj::__boot()
{
	__defaultInterval= (int)34;
	nme_input_get_acceleration= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_input_get_acceleration"),(int)0);
}

} // end namespace flash
} // end namespace sensors
