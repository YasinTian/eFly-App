//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MMSheetViewConfig : NSObject
{
    double _buttonHeight;
    double _innerMargin;
    double _titleFontSize;
    double _buttonFontSize;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIColor *_splitColor;
    UIColor *_itemNormalColor;
    UIColor *_itemDisableColor;
    UIColor *_itemHighlightColor;
    UIColor *_itemPressedColor;
    NSString *_defaultTextCancel;
}

+ (id)globalConfig;
@property(retain, nonatomic) NSString *defaultTextCancel; // @synthesize defaultTextCancel=_defaultTextCancel;
@property(retain, nonatomic) UIColor *itemPressedColor; // @synthesize itemPressedColor=_itemPressedColor;
@property(retain, nonatomic) UIColor *itemHighlightColor; // @synthesize itemHighlightColor=_itemHighlightColor;
@property(retain, nonatomic) UIColor *itemDisableColor; // @synthesize itemDisableColor=_itemDisableColor;
@property(retain, nonatomic) UIColor *itemNormalColor; // @synthesize itemNormalColor=_itemNormalColor;
@property(retain, nonatomic) UIColor *splitColor; // @synthesize splitColor=_splitColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double buttonFontSize; // @synthesize buttonFontSize=_buttonFontSize;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) double innerMargin; // @synthesize innerMargin=_innerMargin;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
- (void).cxx_destruct;
- (id)init;

@end

