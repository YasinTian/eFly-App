//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFSmudgeViewBase.h"

@class NSArray, TuSDKPFBrushBarView, TuSDKPFEditSmudgeBottomBar, UIView;
@protocol TuSDKICSmudgeImageViewInterface;

@interface TuSDKPFEditSmudgeView : TuSDKPFSmudgeViewBase
{
    long long _currentBrushSize;
    long long _defaultBrushSize;
    _Bool _saveLastBrush;
    UIView<TuSDKICSmudgeImageViewInterface> *_imageView;
    TuSDKPFBrushBarView *_brushBar;
    TuSDKPFEditSmudgeBottomBar *_bottomBar;
    UIView *_brushSizeAnimView;
    NSArray *_brushGroup;
    unsigned long long _maxUndoCount;
}

@property(nonatomic) unsigned long long maxUndoCount; // @synthesize maxUndoCount=_maxUndoCount;
@property(nonatomic) _Bool saveLastBrush; // @synthesize saveLastBrush=_saveLastBrush;
@property(retain, nonatomic) NSArray *brushGroup; // @synthesize brushGroup=_brushGroup;
@property(readonly, nonatomic) UIView *brushSizeAnimView; // @synthesize brushSizeAnimView=_brushSizeAnimView;
@property(readonly, nonatomic) TuSDKPFEditSmudgeBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(readonly, nonatomic) TuSDKPFBrushBarView *brushBar; // @synthesize brushBar=_brushBar;
@property(readonly, nonatomic) UIView<TuSDKICSmudgeImageViewInterface> *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)viewWillDestory;
- (void)setBrushSize:(long long)arg1;
- (void)switchBrushSize;
@property(nonatomic) long long defaultBrushSize;
- (void)setImage:(id)arg1;
- (void)needUpdateLayout;
- (id)sizeAnimView;
- (id)smudgeWrap;
- (void)lsqInitView;

@end

