//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKICTableViewCell.h"

#import "TuSDKCPGroupFilterItemCellInterface-Protocol.h"

@class NSString, TuSDKCPGroupFilterItem, UIImageView;
@protocol TuSDKTKFiltersTaskInterface;

@interface TuSDKCPGroupFilterItemCellBase : TuSDKICTableViewCell <TuSDKCPGroupFilterItemCellInterface>
{
    _Bool _activating;
    _Bool _displaySelectionIcon;
    long long _action;
    TuSDKCPGroupFilterItem *_mode;
    UIImageView *_thumbView;
    id <TuSDKTKFiltersTaskInterface> _filterTask;
}

@property(nonatomic) id <TuSDKTKFiltersTaskInterface> filterTask; // @synthesize filterTask=_filterTask;
@property(readonly, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) _Bool displaySelectionIcon; // @synthesize displaySelectionIcon=_displaySelectionIcon;
@property(retain, nonatomic) TuSDKCPGroupFilterItem *mode; // @synthesize mode=_mode;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)stopActivating;
- (void)waitInActivate:(double)arg1;
- (void)viewNeedRest;
- (void)handleBlockView:(id)arg1 icon:(id)arg2;
- (void)handleTypeFilter:(id)arg1;
- (void)handleTypeGroup:(id)arg1;
- (void)handleTypeOrgin:(id)arg1;
- (void)handleTypeOnlie:(id)arg1;
- (void)handleTypeHistory:(id)arg1;
- (void)setSelectedIcon:(id)arg1 needIcon:(_Bool)arg2;
- (void)onRunableRun;
- (void)cancelRunnable;
- (void)startRunnableWithDelay:(double)arg1;
@property(readonly, nonatomic) _Bool isRenderFilterThumb;
@property(readonly, nonatomic) _Bool activating;
- (_Bool)isCameraAction;
- (void)lsqInitView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

