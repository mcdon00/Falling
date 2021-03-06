#include <hxcpp.h>

#ifndef INCLUDED_MainCharacter
#include <MainCharacter.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void MainCharacter_obj::__construct()
{
HX_STACK_PUSH("MainCharacter::new","MainCharacter.hx",16);
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	::flash::display::Bitmap bitmap = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/character.png"),null()),null(),null());		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(20)
	this->myGraphic = bitmap;
	HX_STACK_LINE(23)
	this->addChild(bitmap);
	HX_STACK_LINE(24)
	this->set_width(bitmap->get_width());
	HX_STACK_LINE(25)
	this->set_height(bitmap->get_height());
}
;
	return null();
}

MainCharacter_obj::~MainCharacter_obj() { }

Dynamic MainCharacter_obj::__CreateEmpty() { return  new MainCharacter_obj; }
hx::ObjectPtr< MainCharacter_obj > MainCharacter_obj::__new()
{  hx::ObjectPtr< MainCharacter_obj > result = new MainCharacter_obj();
	result->__construct();
	return result;}

Dynamic MainCharacter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainCharacter_obj > result = new MainCharacter_obj();
	result->__construct();
	return result;}


MainCharacter_obj::MainCharacter_obj()
{
}

void MainCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainCharacter);
	HX_MARK_MEMBER_NAME(myGraphic,"myGraphic");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(myGraphic,"myGraphic");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MainCharacter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"myGraphic") ) { return myGraphic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainCharacter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"myGraphic") ) { myGraphic=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("myGraphic"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("myGraphic"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainCharacter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainCharacter_obj::__mClass,"__mClass");
};

Class MainCharacter_obj::__mClass;

void MainCharacter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MainCharacter"), hx::TCanCast< MainCharacter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MainCharacter_obj::__boot()
{
}

