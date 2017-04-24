#ifndef OPENPOSE__FILESTREAM__POSE_JSON_SAVER_HPP
#define OPENPOSE__FILESTREAM__POSE_JSON_SAVER_HPP

#include <string>
#include <vector>
#include "../core/array.hpp"
#include "fileSaver.hpp"

namespace op
{
    class PoseJsonSaver : public FileSaver
    {
    public:
        explicit PoseJsonSaver(const std::string& directoryPath);

        void savePoseVector(const std::vector<Array<float>>& poseVector, const std::string& fileName) const;
    };
}

#endif // OPENPOSE__FILESTREAM__POSE_JSON_SAVER_HPP
