//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MWCaptionView, MWPhotoBrowser, NSString;
@protocol MWPhoto;

@protocol MWPhotoBrowserDelegate <NSObject>
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)arg1;

@optional
- (void)photoBrowser:(MWPhotoBrowser *)arg1 editPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 repairVideoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 saveFileAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 deleteFileAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 hiddenNavAndTabbar:(_Bool)arg2;
- (void)photoBrowserDidDownloadSelections:(MWPhotoBrowser *)arg1;
- (void)photoBrowserDidDeleteSelections:(MWPhotoBrowser *)arg1;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 isSelection:(_Bool)arg2;
- (void)photoBrowserDidFinishModalPresentation:(MWPhotoBrowser *)arg1;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)photoBrowser:(MWPhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 actionButtonPressedForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(MWPhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (MWCaptionView *)photoBrowser:(MWPhotoBrowser *)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
@end

