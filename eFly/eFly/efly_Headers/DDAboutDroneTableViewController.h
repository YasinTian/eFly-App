//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseTableViewController.h"

@class NSMutableArray, NSString;

@interface DDAboutDroneTableViewController : DDBaseTableViewController
{
    NSMutableArray *_dataList;
    NSString *_droneName;
    NSString *_droneFreeSpace;
    NSString *_droneVersionFW;
    NSString *_droneVersionOF;
    NSString *_droneVersionCamera;
    NSString *_droneSN;
}

@property(retain, nonatomic) NSString *droneSN; // @synthesize droneSN=_droneSN;
@property(retain, nonatomic) NSString *droneVersionCamera; // @synthesize droneVersionCamera=_droneVersionCamera;
@property(retain, nonatomic) NSString *droneVersionOF; // @synthesize droneVersionOF=_droneVersionOF;
@property(retain, nonatomic) NSString *droneVersionFW; // @synthesize droneVersionFW=_droneVersionFW;
@property(retain, nonatomic) NSString *droneFreeSpace; // @synthesize droneFreeSpace=_droneFreeSpace;
@property(retain, nonatomic) NSString *droneName; // @synthesize droneName=_droneName;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (id)setDetailTextLabel:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)spaceValue:(double)arg1;
- (void)updateSDFreeSpace:(double)arg1;
- (void)updateVersion:(id)arg1;
- (void)updateSN:(id)arg1;
- (void)notifyMessage:(id)arg1;
- (void)showProgress:(_Bool)arg1;
- (void)requestSN;
- (void)requestVersion;
- (void)requestSDFreeSpace;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
