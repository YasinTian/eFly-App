//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "DDTutorshipHandlerDelegate-Protocol.h"

@class DDTutorshipHandler, M13ProgressViewRing, NSMutableArray, NSString;

@interface DDTutorshipVideoViewController : UITableViewController <DDTutorshipHandlerDelegate>
{
    DDTutorshipHandler *_tutorshipHandler;
    NSMutableArray *_dataList;
    M13ProgressViewRing *_progressView;
}

@property(retain, nonatomic) M13ProgressViewRing *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)playVideo:(id)arg1 loacal:(_Bool)arg2;
- (void)setSelectEvent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tutorship:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)showIndeterminateProgress:(_Bool)arg1;
- (void)showProgress:(_Bool)arg1 progress:(float)arg2;
- (void)getMenuList;
- (void)initList;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

