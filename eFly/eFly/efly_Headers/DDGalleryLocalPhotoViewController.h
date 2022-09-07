//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseViewController.h"

#import "DDLocalPhotosHandlerDelegate-Protocol.h"
#import "TuSDKFilterManagerDelegate-Protocol.h"

@class DDProgressView, MBProgressHUD, MWPhotoBrowser, NSString, TuSDKCPAlbumComponent, TuSDKCPPhotoEditMultipleComponent, UIView;

@interface DDGalleryLocalPhotoViewController : DDBaseViewController <DDLocalPhotosHandlerDelegate, TuSDKFilterManagerDelegate>
{
    TuSDKCPAlbumComponent *_albumComponent;
    TuSDKCPPhotoEditMultipleComponent *_photoEditMultipleComponent;
    NSString *_editPhotoName;
    MWPhotoBrowser *_pBrowser;
    UIView *_galleryView;
    MBProgressHUD *_mbProgressHUD;
    DDProgressView *_progressPopupView;
}

@property(retain, nonatomic) DDProgressView *progressPopupView; // @synthesize progressPopupView=_progressPopupView;
@property(retain, nonatomic) MBProgressHUD *mbProgressHUD; // @synthesize mbProgressHUD=_mbProgressHUD;
@property(retain, nonatomic) UIView *galleryView; // @synthesize galleryView=_galleryView;
- (void).cxx_destruct;
- (id)waterMarkOption;
- (void)openEditMultipleWithController:(id)arg1 result:(id)arg2;
- (void)onTuSDKFilterManagerInited:(id)arg1;
- (void)openImageFromTuSDKResult:(id)arg1;
- (void)saveImageToLocal:(id)arg1;
- (void)photos:(id)arg1 photo:(id)arg2;
- (void)photos:(id)arg1 showAlertMessage:(id)arg2;
- (void)photos:(id)arg1 showProgress:(_Bool)arg2 message:(id)arg3 progress:(float)arg4;
- (void)photos:(id)arg1 numberOfPhotos:(unsigned long long)arg2;
- (void)photos:(id)arg1 hiddenNavAndTabbar:(_Bool)arg2;
- (void)photos:(id)arg1 willLoad:(_Bool)arg2;
- (void)getPhotos:(id)arg1 browser:(id)arg2;
- (void)addChildViewControllerToCurrentView:(id)arg1;
- (void)setGalleryViewFullScreen;
- (void)initGalleryViewFrame;
- (void)initUI;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

