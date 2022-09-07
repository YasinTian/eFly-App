//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TuSDKCPGroupFilterBarDelegate-Protocol.h"

@class NSArray, NSString, UIViewController;
@protocol TuSDKCPGroupFilterBarInterface, TuSDKCPSubtitlesViewInterface;

@interface TuSDKCPGroupFilterBaseView : UIView <TuSDKCPGroupFilterBarDelegate>
{
    _Bool _enableShowActive;
    _Bool _stateHidden;
    _Bool _saveLastFilter;
    _Bool _autoSelectGroupDefaultFilter;
    _Bool _allowsSelection;
    _Bool _enableFilterConfig;
    _Bool _enableNormalFilter;
    _Bool _enableOnlineFilter;
    _Bool _enableHistory;
    _Bool _displaySubtitles;
    _Bool _isRenderFilterThumb;
    long long _action;
    double _cellWidth;
    double _stackViewWidth;
    double _filterBarHeight;
    Class _groupTableCellClazz;
    Class _stackViewClazz;
    Class _filterTableCellClazz;
    UIView<TuSDKCPGroupFilterBarInterface> *_filterBar;
    UIView<TuSDKCPSubtitlesViewInterface> *_titleView;
    NSArray *_filterGroup;
    Class _onlineControllerClazz;
    UIViewController *_controller;
}

@property(nonatomic) _Bool isRenderFilterThumb; // @synthesize isRenderFilterThumb=_isRenderFilterThumb;
@property(nonatomic) _Bool displaySubtitles; // @synthesize displaySubtitles=_displaySubtitles;
@property(nonatomic) _Bool enableHistory; // @synthesize enableHistory=_enableHistory;
@property(nonatomic) UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) Class onlineControllerClazz; // @synthesize onlineControllerClazz=_onlineControllerClazz;
@property(nonatomic) _Bool enableOnlineFilter; // @synthesize enableOnlineFilter=_enableOnlineFilter;
@property(nonatomic) _Bool enableNormalFilter; // @synthesize enableNormalFilter=_enableNormalFilter;
@property(nonatomic) _Bool enableFilterConfig; // @synthesize enableFilterConfig=_enableFilterConfig;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) _Bool autoSelectGroupDefaultFilter; // @synthesize autoSelectGroupDefaultFilter=_autoSelectGroupDefaultFilter;
@property(nonatomic) _Bool saveLastFilter; // @synthesize saveLastFilter=_saveLastFilter;
@property(retain, nonatomic) NSArray *filterGroup; // @synthesize filterGroup=_filterGroup;
@property(readonly, nonatomic) UIView<TuSDKCPSubtitlesViewInterface> *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) UIView<TuSDKCPGroupFilterBarInterface> *filterBar; // @synthesize filterBar=_filterBar;
@property(retain, nonatomic) Class filterTableCellClazz; // @synthesize filterTableCellClazz=_filterTableCellClazz;
@property(retain, nonatomic) Class stackViewClazz; // @synthesize stackViewClazz=_stackViewClazz;
@property(retain, nonatomic) Class groupTableCellClazz; // @synthesize groupTableCellClazz=_groupTableCellClazz;
@property(nonatomic) double filterBarHeight; // @synthesize filterBarHeight=_filterBarHeight;
@property(nonatomic) double stackViewWidth; // @synthesize stackViewWidth=_stackViewWidth;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) _Bool stateHidden; // @synthesize stateHidden=_stateHidden;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)exitRemoveState;
- (void)setDefaultShowState:(_Bool)arg1;
- (void)loadFilters;
- (void)notifyTitleWithMode:(id)arg1;
- (_Bool)notifyTitleWithCell:(id)arg1 mode:(id)arg2;
- (_Bool)onTuSDKCPGroupFilterBar:(id)arg1 selectedCell:(id)arg2 mode:(id)arg3;
- (void)setThumbImage:(id)arg1;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

