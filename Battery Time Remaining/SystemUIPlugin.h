#import <AppKit/AppKit.h>

/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

/*
 * File: /System/Library/PrivateFrameworks/SystemUIPlugin.framework/Versions/A/SystemUIPlugin
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 2.0.0, Compatibility version: 1.0.0
 *
 *       Objective-C Garbage Collection: Unsupported
 */

@interface NSMenuExtra : NSStatusItem
{
    NSBundle *_bundle;
    NSMenu *_menu;
    NSView *_view;
    double _length;
    struct {
        unsigned int customView:1;
        unsigned int menuDown:1;
        unsigned int reserved:30;
    } _flags;
    id _controller;
    BOOL _supportsAnimation;
    NSArray *_animatedImages;
    double _imageFrameRate;
    double _maxWidth;
}

+ (unsigned int)defaultLength;
@property(nonatomic) BOOL supportsAnimation; // @synthesize supportsAnimation=_supportsAnimation;
- (void)performAXCancel;
- (void)performAXPress;
- (id)AXSize;
- (id)AXPosition;
- (void)setAXSelected:(id)arg1;
- (BOOL)isAXSelectedSettable;
- (id)AXSelected;
- (id)AXEnabled;
- (id)AXValue;
- (id)AXTitle;
- (id)AXParent;
- (id)AXChildren;
- (id)AXDescription;
- (id)AXSubrole;
- (id)AXRoleDescription;
- (id)AXRole;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (double)defaultLength;
- (void)setMenuDown:(BOOL)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (void)setsSupportsAnimation:(BOOL)arg1;
- (void)stopTextAnimation;
- (void)startTextAnimation;
- (void)stopImageAnimation;
- (void)startImageAnimation;
- (void)setStaticText:(id)arg1;
- (void)setAnimationText:(id)arg1;
@property(copy, nonatomic) NSArray *images;
@property(nonatomic) double maxWidth;
@property(nonatomic) double imageFrameRate;
- (void)_adjustLength;
- (id)_button;
- (id)_window;
- (id)_initInStatusBar:(id)arg1 withLength:(float)arg2 withPriority:(int)arg3;
- (long long)sendActionOn:(long long)arg1;
- (BOOL)highlightMode;
- (void)setHighlightMode:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (id)statusBar;
- (void)unload;
- (void)popUpMenu:(id)arg1;
- (void)drawMenuBackground:(BOOL)arg1;
- (BOOL)isMenuDownForAX;
- (BOOL)isMenuDown;
- (BOOL)convertedForNewUI;
- (void)setView:(id)arg1;
- (id)view;
- (void)setToolTip:(id)arg1;
- (id)toolTip;
- (void)setMenu:(id)arg1;
- (id)menu;
- (void)setAlternateImage:(id)arg1;
- (id)alternateImage;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setLength:(double)arg1;
- (double)length;
- (id)bundle;
- (void)dealloc;
- (void)willUnload;
- (id)initWithBundle:(id)arg1 data:(id)arg2;
- (id)initWithBundle:(id)arg1;

@end

@interface NSMenuExtraView : NSView
{
    NSMenu *_menu;
    NSMenuExtra *_menuExtra;
    NSImage *_image;
    NSImage *_alternateImage;
}

- (id)initWithFrame:(NSRect)arg1 menuExtra:(id)arg2;
- (void)dealloc;
- (void)setMenu:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)alternateImage;
- (void)setAlternateImage:(id)arg1;
- (void)drawRect:(NSRect)arg1;
- (void)mouseDown:(id)arg1;

@end

@interface NSMenuExtra (NSMenuExtraPrivate)
+ (unsigned int)defaultLength;
- (void)setController:(id)arg1;
- (id)controller;
- (void)setMenuDown:(BOOL)arg1;
- (float)defaultLength;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (id)AXRole;
- (id)AXRoleDescription;
- (id)AXSubrole;
- (id)AXDescription;
- (id)AXChildren;
- (id)AXParent;
- (id)AXTitle;
- (id)AXValue;
- (id)AXEnabled;
- (id)AXSelected;
- (BOOL)isAXSelectedSettable;
- (void)setAXSelected:(id)arg1;
- (id)AXPosition;
- (id)AXSize;
- (void)performAXPress;
- (void)performAXCancel;
@end