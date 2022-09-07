//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPViewController.h"

@class NSArray, NSString;
@protocol TuSDKTSAssetsGroupInterface;

@interface TuSDKPFAlbumViewControllerBase : TuSDKCPViewController
{
    _Bool _disableAutoSkipToPhotoList;
    NSArray<TuSDKTSAssetsGroupInterface> *_groups;
    NSString *_skipAlbumName;
}

@property(copy, nonatomic) NSString *skipAlbumName; // @synthesize skipAlbumName=_skipAlbumName;
@property(nonatomic) _Bool disableAutoSkipToPhotoList; // @synthesize disableAutoSkipToPhotoList=_disableAutoSkipToPhotoList;
@property(retain, nonatomic) NSArray<TuSDKTSAssetsGroupInterface> *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)buildAlbumView;
- (void)notifySelectedGroup:(id)arg1;
- (void)autoSelectedAblumGroupAction;
- (void)getImageAlbums;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

