//
//  ServicesViewController.h
//  BusinessApplication
//
//  Created by chang on 21/07/2019.
//  Copyright © 2019 chang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ServicesViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *detailImage;
@property (weak, nonatomic) IBOutlet UILabel *detailTitle;
@property (weak, nonatomic) IBOutlet UITextView *detailDescription;

@property (strong, nonatomic) NSArray *detailModal;



@end

NS_ASSUME_NONNULL_END
