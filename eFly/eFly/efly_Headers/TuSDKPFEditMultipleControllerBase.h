//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPImageResultController.h"

@class NSArray, NSMutableArray, TuSDKNKImageAutoColorAnalysis, UIImage;

@interface TuSDKPFEditMultipleControllerBase : TuSDKCPImageResultController
{
    NSMutableArray *_histories;
    NSMutableArray *_brushies;
    TuSDKNKImageAutoColorAnalysis *_autoAdjust;
    _Bool _limitForScreen;
    _Bool _disableStepsSave;
    unsigned long long _limitSideSize;
    long long _ratioType;
    NSArray *_ratioTypeList;
    NSArray *_modules;
    UIImage *_displayImage;
}

@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(nonatomic) _Bool disableStepsSave; // @synthesize disableStepsSave=_disableStepsSave;
@property(retain, nonatomic) NSArray *ratioTypeList; // @synthesize ratioTypeList=_ratioTypeList;
@property(nonatomic) long long ratioType; // @synthesize ratioType=_ratioType;
@property(nonatomic) _Bool limitForScreen; // @synthesize limitForScreen=_limitForScreen;
@property(nonatomic) unsigned long long limitSideSize; // @synthesize limitSideSize=_limitSideSize;
- (void).cxx_destruct;
- (void)asyncEditWithResult:(id)arg1;
- (void)onImageCompleteAtion;
- (void)onAutoAdjustAction;
- (void)asyncLoadStepImage;
- (void)onStepNextAction;
- (void)onStepPreviewAction;
- (void)appendHistory:(id)arg1;
- (id)lastStepTemp;
- (void)clearSteps:(id)arg1;
- (void)onRefreshAutoAdjustButtonEnable:(_Bool)arg1;
- (void)onRefreshStepStatesWithHistories:(unsigned long long)arg1 brushies:(unsigned long long)arg2;
- (void)refreshStepStates;
- (void)onEditWithAction:(id)arg1;
- (double)limitSize;
- (id)handleImageData:(id)arg1;
- (_Bool)checkImageValid:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)asyncLoadImage;
- (id)getRatioTypes;
- (void)controllerWillDestory;
- (void)viewDidLoad;
- (id)init;

@end

