//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseTableViewController.h"

@class NSArray, NSMutableArray;

@interface DDMainSettingsViewController : DDBaseTableViewController
{
    _Bool _newViesion;
    NSMutableArray *_dataList;
    NSMutableArray *_appSettingsList;
    NSMutableArray *_droneSettingsList;
    NSArray *_connectedDroneSettingsList;
}

@property(retain, nonatomic) NSArray *connectedDroneSettingsList; // @synthesize connectedDroneSettingsList=_connectedDroneSettingsList;
@property(retain, nonatomic) NSMutableArray *droneSettingsList; // @synthesize droneSettingsList=_droneSettingsList;
@property(retain, nonatomic) NSMutableArray *appSettingsList; // @synthesize appSettingsList=_appSettingsList;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)entryAboutDrone;
- (void)entryFirmwareUpdate;
- (void)entryGyroCalibration;
- (void)entryMagnetometerCalibration;
- (unsigned long long)getCacheSize;
- (void)deleteCacheFiles:(id)arg1;
- (void)entryCheckAPP;
- (void)clearCacheData;
- (void)updateTutorialMode:(id)arg1;
- (void)updateDroneFace:(id)arg1;
- (void)setFlightSpeed;
- (void)entrySelectOperateMode;
- (void)setSelectEvent:(id)arg1;
- (id)setDetailTextLabel:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshDroneSettingsView;
- (void)deviceConnectionStatus:(_Bool)arg1;
- (void)initUI;
- (void)loadData;
- (id)initWithStyle:(long long)arg1;
- (void)showProgress:(_Bool)arg1;
- (void)notifyMessage:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

