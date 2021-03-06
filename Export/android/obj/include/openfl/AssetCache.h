#ifndef INCLUDED_openfl_AssetCache
#define INCLUDED_openfl_AssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(openfl,AssetCache)
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  AssetCache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetCache_obj OBJ_;
		AssetCache_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AssetCache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AssetCache_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetCache"); }

		virtual Void clear( );
		Dynamic clear_dyn();

		::haxe::ds::StringMap sound;
		::haxe::ds::StringMap font;
		bool enabled;
		::haxe::ds::StringMap bitmapData;
};

} // end namespace openfl

#endif /* INCLUDED_openfl_AssetCache */ 
