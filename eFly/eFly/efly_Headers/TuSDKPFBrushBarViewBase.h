//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TuSDKPFBrushLocalPackageDelegate-Protocol.h"

@class NSArray, NSString, TuSDKPFBrush;
@protocol TuSDKPFBrushTableViewInterface;

@interface TuSDKPFBrushBarViewBase : UIView <TuSDKPFBrushLocalPackageDelegate>
{
    NSArray *_brushes;
    TuSDKPFBrush *_lastBrush;
    _Bool _mNeedSelected;
    long long _currentBrushSize;
    _Bool _saveLastBrush;
    UIView<TuSDKPFBrushTableViewInterface> *_tableView;
    long long _action;
    double _cellWidth;
    NSArray *_brushGroup;
}

@property(nonatomic) _Bool saveLastBrush; // @synthesize saveLastBrush=_saveLastBrush;
@property(retain, nonatomic) NSArray *brushGroup; // @synthesize brushGroup=_brushGroup;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(readonly, nonatomic) UIView<TuSDKPFBrushTableViewInterface> *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)brushManager:(id)arg1 item:(id)arg2 changedStatus:(long long)arg3;
- (void)saveLastBrush:(id)arg1;
- (id)loadLastBrush;
- (void)notifySelectedBrush:(id)arg1;
- (void)selectBrush:(id)arg1;
- (void)refreshBrushData;
- (id)buildBrushItems;
- (void)loadBrushes;
- (void)viewWillDestory;
- (void)lsqInitView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

